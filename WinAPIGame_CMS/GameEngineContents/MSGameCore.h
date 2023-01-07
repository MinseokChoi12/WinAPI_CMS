#pragma once
#include <GameEngineCore/GameEngineCore.h>

// �̷��� Ŭ������ ����� ��� ����ü�� �̱����̶�� �մϴ�.

// ���� :
class MSGameCore : public GameEngineCore
{
public:
	// delete Function
	MSGameCore(const MSGameCore& _Other) = delete;
	MSGameCore(MSGameCore&& _Other) noexcept = delete;
	MSGameCore& operator=(const MSGameCore& _Other) = delete;
	MSGameCore& operator=(MSGameCore&& _Other) noexcept = delete;

	// �̱���
	static MSGameCore& GetInst()
	{
		return Core;
	}

	// �����ͷ� ����ÿ��� �߰��� ������ �����ϴٴ� ������ �ִ�.
	//static StudyGameCore& Destroy()
	//{
	//	delete Core;
	//}

protected:
	void Start() override;
	void Update() override;
	void End() override;


private:
	// �����ڸ� ����.
	// constrcuter destructer
	MSGameCore();
	~MSGameCore();

	// �ڱ⸦ �ڽ��� ������
	// ���α׷��� ��Ʋ� ���� 1���� ��ü�� ���������
	// static StudyGameCore* Core;
	static MSGameCore Core;

};

