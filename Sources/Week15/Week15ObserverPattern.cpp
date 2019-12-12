#include "Week15ObserverPattern.h"

void Week15ObserverPattern::PatternMain()
{
	GoodPlayer *goodPlayer = new GoodPlayer();
	BadPlayer *badPlayer = new BadPlayer();

	PostMachine *postMachine = new PostMachine(2);
	AdMobMachine *admobMachine = new AdMobMachine(2);

	admobMachine->NotifyAdmob();

	postMachine->AddObserver(goodPlayer);
	postMachine->NotifyPost();

	postMachine->AddObserver(badPlayer);
	postMachine->NotifyPost();

	admobMachine->AddObserver(goodPlayer);
	admobMachine->NotifyAdmob();

	postMachine->DeleteObserver(badPlayer);
	postMachine->NotifyPost();

	delete goodPlayer;
	delete badPlayer;

	delete postMachine;
	delete admobMachine;
}

// Machine
Machine::Machine(std::string machineName, int maxObserverCount)
{
	_machineName = machineName;
	_observerList = new Observer*[maxObserverCount];
	for (int i = 0; i < maxObserverCount; i++)
	{
		_observerList[i] = nullptr;
	}

	_maxObserverCount = maxObserverCount;
}

Machine::~Machine()
{
	delete _observerList;
}

void Machine::AddObserver(Observer *observer)
{
	for (int i = 0; i < _maxObserverCount; i++)
	{
		if (_observerList[i] == nullptr)
		{
			_observerList[i] = observer;
			break;
		}
	}
}

void Machine::DeleteObserver(Observer *observer)
{
	bool isFind = false;
	for (int i = 0; i < _maxObserverCount; i++)
	{
		if (_observerList[i] == observer)
		{
			_observerList[i] = nullptr;
			break;
		}
	}
}

void Machine::NotifyUpdate()
{
	for (int i = 0; i < _maxObserverCount; i++)
	{
		if (_observerList[i] != nullptr)
			_observerList[i]->NotifyUpdate(_machineName);
	}
}

// PostMachine
PostMachine::PostMachine(int maxObserverCount) : Machine("Post", maxObserverCount)
{
	// DO NOTHING
}

void PostMachine::NotifyPost()
{
	std::cout << "Notify Post!!" << std::endl;
	NotifyUpdate();
}

// PostMachine
AdMobMachine::AdMobMachine(int maxObserverCount) : Machine("Admob", maxObserverCount)
{
	// DO NOTHING
}

void AdMobMachine::NotifyAdmob()
{
	std::cout << "Notify Admob!!" << std::endl;
	NotifyUpdate();
}

// GoodPlayer
void GoodPlayer::NotifyUpdate(std::string machineName)
{
	std::cout << "GoodPlayer : " << machineName.c_str() << " Updated!" << std::endl;
}

// BadPlayer
void BadPlayer::NotifyUpdate(std::string machineName)
{
	std::cout << "BadPlayer : " << machineName.c_str() << " Updated!" << std::endl;
}