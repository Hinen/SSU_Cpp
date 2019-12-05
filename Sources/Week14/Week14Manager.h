#pragma once
#include "../WeekManagerBase.h"

class Week14Manager : public WeekManagerBase
{
public:
	Week14Manager();
	~Week14Manager();

private:
	class Display
	{
	public:
		virtual void DrawDisplay() = 0;
	};

	class HinenDisplay : public Display
	{
	public:
		virtual void DrawDisplay() override;
	};

	class DisplayDecorator : public Display
	{
	public:
		DisplayDecorator(Display *display);

	private:
		Display *_display;

	public:
		virtual void DrawDisplay() override;
	};

	class DpsDisplayDecorator : public DisplayDecorator
	{
	public:
		DpsDisplayDecorator(Display *display) : DisplayDecorator(display)
		{
			// DO NOTHING
		}

	public:
		virtual void DrawDisplay() override;
	};

	class HpsDisplayDecorator : public DpsDisplayDecorator
	{
	public:
		HpsDisplayDecorator(Display *display) : DpsDisplayDecorator(display)
		{
			// DO NOTHING
		}

	public:
		virtual void DrawDisplay() override;
	};

public:
	virtual void Main() override;

private:
	void DecoratorPattern();
};