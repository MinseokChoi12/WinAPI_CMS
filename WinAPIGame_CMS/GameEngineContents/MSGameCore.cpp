#include "MSGameCore.h"
#include <GameEnginePlatform/GameEngineWindow.h>

#include "PlayLevel.h"
#include "TitleLevel.h"

// StudyGameCore StudyGameCore::Core = new StudyGameCore();

// �߰��� ����� �������� �����ָ� ������������ ���� �����Ҵ��ؼ� ����Ѵٴ°�
// �������⿡�� ��??? �׷�������?
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