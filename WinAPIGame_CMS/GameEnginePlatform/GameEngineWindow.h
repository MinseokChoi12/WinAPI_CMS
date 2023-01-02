#pragma once
#include <string>
#include <Windows.h>
#include <GameEngineBase/GameEngineMath.h>

// ������� �ڵ� ����̶�°��� �̿��Ѵ�.
// �ڵ����̶� �츮���� os�� �����Ѵٴ� �������� ���� 1�� �ݴϴ�.
// �� ���ڸ� �ڵ��̶�� �մϴ�.

// ���� :
class GameEngineWindow
{
public:
	// �����츦 ����� �ִ� ����Դϴ�.
	static void WindowCreate(HINSTANCE _hInstance, const std::string_view& _TitleName);

	static void WindowSize(float4 _Size);
	static void WindowPos(float4 _Pos);

	static int WindowLoop();

	GameEngineWindow();
	~GameEngineWindow();

	// delete Function
	GameEngineWindow(const GameEngineWindow& _Other) = delete;
	GameEngineWindow(GameEngineWindow&& _Other) noexcept = delete;
	GameEngineWindow& operator=(const GameEngineWindow& _Other) = delete;
	GameEngineWindow& operator=(GameEngineWindow&& _Other) noexcept = delete;

protected:

private:
	static HWND hWnd;
};
