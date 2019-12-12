#pragma once
#include "../DesignPatternBaseManager.h"

class Week15ObserverPattern : public DesignPatternBaseManager
{
public:
	virtual void PatternMain() override;
};

class Observer
{
public:
	virtual void NotifyUpdate(std::string machineName) = 0;
};

class MachineBase
{
public:
	virtual void AddObserver(Observer *observer) = 0;
	virtual void DeleteObserver(Observer *observer) = 0;

protected:
	virtual void NotifyUpdate() = 0;
};

class Machine : public MachineBase
{
private:
	std::string _machineName;
	Observer **_observerList;
	int _maxObserverCount;

public:
	Machine(std::string machineName, int maxObserverCount);
	~Machine();

public:
	virtual void AddObserver(Observer *observer) override;
	virtual void DeleteObserver(Observer *observer) override;

protected:
	virtual void NotifyUpdate() override;
};

class PostMachine : public Machine
{
public:
	PostMachine(int maxObserverCount);

public:
	void NotifyPost();
};

class AdMobMachine : public Machine
{
public:
	AdMobMachine(int maxObserverCount);

public:
	void NotifyAdmob();
};

class GoodPlayer : public Observer
{
public:
	virtual void NotifyUpdate(std::string machineName) override;
};

class BadPlayer : public Observer
{
public:
	virtual void NotifyUpdate(std::string machineName) override;
};