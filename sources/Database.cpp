﻿#include "Database.h"
#include "Parsing.h"
#include "sha1.h"
#include <memory>


int Database::searchUserByName(string username)
{
	auto uit = _usersMapByName.find(username);
	if (uit != _usersMapByName.end()) return uit->second;
  return -1;
}

vector<string> Database::getUserList() const
{
  vector<string> userList;
  for(auto user : _usersMapByName)
  {
    userList.push_back(user.first);
  }
  return userList;
}

string Database::getUserName(int userId) const
{
  for (auto it = _usersMapByName.begin(); it != _usersMapByName.end(); ++it) {
    if (it->second == userId)
      return it->first;
  }
  return "";
}

Database::Database() : _users(), _messages()
{
}

int Database::addUser(string username, string password)
{
	if (!correctName(username)) return -1;
	auto uit = _usersMapByName.find(username);
	if (uit != _usersMapByName.end()) return -2;
	User newUser = User(username, sha1(password));
	_users.push_back(newUser);
  _usersMapByName.insert({ username, newUser.getUserID() });
	return newUser.getUserID();
}

int Database::addUser(string username, string password, bool admin) // Overloaded function for admins that adds an admin into database
{
    if (!correctName(username)) return -1;
    auto uit = _usersMapByName.find(username);
    if (uit != _usersMapByName.end()) return -2;
    User newUser = User(username, sha1(password), admin);
    _users.push_back(newUser);
    _usersMapByName.insert({ username, newUser.getUserID() });
    return newUser.getUserID();
}

int Database::checkPassword(string username, string password)
{
	int result = -1;
	Hash passHash = sha1(password);
	for (const auto &u : _users)
	{
		result = u.checklogin(username, passHash);
		if (result != -1) return result;
	}
	return result;
}

QDateTime Database::getBanTime(int userID)
{
    for (const auto &u : _users)
    {
        if (u.getUserID() == userID) return u.getBanTime();
    }
    return QDateTime::currentDateTime();
}

int Database::getUserId(string userName) const
{
    for (const auto &u : _users)
    {
        if (u.getUserName() == userName) return u.getUserID();
    }
    return -1;
}

void Database::setBanTime(int userID, int banTime)
{
    for (auto &u : _users)
    {
        if (u.getUserID() == userID)
        {
            u.setBanTime(banTime);
            return;
        }
    }
}

bool Database::getAdmin(int userID) const   // Function that returns whether the user is admin or not
{
    for (const auto &u : _users)
    {
        if (u.getUserID() == userID) return u.getAdmin();
    }
    return false;
}

void Database::addChatMessage(string sender, string text)
{
	_messages.push_back(Message(sender, text));
}

bool Database::addPrivateMessage(string sender, string target, string message)
{
	int targetUser = searchUserByName(target);
	if (targetUser < 0)
	{
		return false;
	}
  _messages.push_back(Message(sender, targetUser, message));
	return true;
}

vector<string> Database::getChatMessages()
{
	vector<string> strings;
	for (auto &m: _messages)
	{
		if (m.getDest() == -1)
		{
			strings.push_back("<" + m.getSender() + ">: " + m.getText());
		}
	}
	return strings;
}

vector<Message> Database::getPrivateMessage(int userID)
{
	vector<Message> strings;
	//int userID = searchUserByName(username);
	for (auto &m : _messages)
  {
    if(userID == -1 && m.getDest() != -1)
      strings.push_back(m);
    else if(userID != -1 && m.getDest() == userID)
      strings.push_back(m);
	}
	return strings;
}
