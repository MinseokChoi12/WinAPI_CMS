#include "MSGameCore.h"
#include <GameEnginePlatform/GameEngineWindow.h>

#include "PlayLevel.h"
#include "TitleLevel.h"

// StudyGameCore StudyGameCore::Core = new StudyGameCore();

// 중간에 절대로 지워지지 않을애를 포인터형으로 만들어서 동적할당해서 사용한다는건
// 제가보기에는 왜??? 그래야하지?
MSGameCore MSGameCore::Core;

MSGameCore::MSGameCore()
{
}

MSGameCore::~MSGameCore()
{
}

void MSGameCore::Start()
{
	//new int();
	GameEngineWindow::SettingWindowSize({ 1600, 900 });

	CreateLevel<PlayLevel>("Play");
	CreateLevel<TitleLevel>("Title");
	ChangeLevel("Title");
}

void MSGameCore::Update()
{

}
void MSGameCore::End()
{

}