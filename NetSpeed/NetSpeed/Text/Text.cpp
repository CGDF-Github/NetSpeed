#include "Text.h"

#include "../Registry/Registry.h"

std::vector<Text>	Text::TextVector_(Text::Language::Total);

//public:

VOID Text::Init() {
	Text &Text_ChineseSimplified = TextVector_[Language::ChineseSimplified];
	Text_ChineseSimplified.Button_Clean_ = L"����";
	Text_ChineseSimplified.Button_CleanAndExit_ = L"�����˳�";
	Text_ChineseSimplified.Button_ColorBackground_ = L"������ɫ";
	Text_ChineseSimplified.Button_ColorText_ = L"������ɫ";
	Text_ChineseSimplified.Dialog_Setting_Caption_ = L"����";
	Text_ChineseSimplified.MenuItem_Clean_ = L"����ע���";
	Text_ChineseSimplified.MenuItem_Exit_ = L"�˳�";
	Text_ChineseSimplified.MenuItem_Hide_ = L"����";
	Text_ChineseSimplified.MenuItem_Setting_ = L"����";
	Text_ChineseSimplified.MenuItem_Show_ = L"��ʾ";
	Text_ChineseSimplified.MenuItem_Startup_ = L"��������";
	Text_ChineseSimplified.Message_CreateSharedMemoryFail_ = L"���������ڴ�ʧ�ܡ�";
	Text_ChineseSimplified.Message_RegistryOpenFail_ = L"��ע���ʧ�ܡ�";
	Text_ChineseSimplified.Message_CleanFinish_ = L"����ע�����ɡ�";
	Text_ChineseSimplified.Name_ = L"��������";
	Text_ChineseSimplified.Static_Language_ = L"����";
	Text_ChineseSimplified.Static_Size_ = L"��С";
	Text_ChineseSimplified.Static_Transparency_ = L"͸���ȣ�";
}

INT Text::Language_Get(std::wstring Language_Name) {
	INT Language_Index = -1;
	for (INT Index = 0; Index <= Text::Language::Total - 1; Index++) {
		if (Text::Name(Index) == Language_Name) {
			Language_Index = Index;
			break;
		}
	}
	return Language_Index;
}

std::wstring Text::Name(INT Language) {
	return TextVector_[Language].Name_;
}

//public:

std::wstring Text::Button_Clean() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].Button_Clean_;
}

std::wstring Text::Button_CleanAndExit() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].Button_CleanAndExit_;
}

std::wstring Text::Button_ColorBackground() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].Button_ColorBackground_;
}

std::wstring Text::Button_ColorText() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].Button_ColorText_;
}

std::wstring Text::Check_Show() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].Check_Show_;
}

std::wstring Text::Check_Startup() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].Check_Startup_;
}

std::wstring Text::Dialog_Caption() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].Dialog_Setting_Caption_;
}

std::wstring Text::MenuItem_Clean() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].MenuItem_Clean_;
}

std::wstring Text::MenuItem_Exit() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].MenuItem_Exit_;
}

std::wstring Text::MenuItem_Hide() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].MenuItem_Hide_;
}

std::wstring Text::MenuItem_Setting() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].MenuItem_Setting_;
}

std::wstring Text::MenuItem_Show() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].MenuItem_Show_;
}

std::wstring Text::MenuItem_Startup() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].MenuItem_Startup_;
}

std::wstring Text::Message_CreateSharedMemoryFail() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].Message_CreateSharedMemoryFail_;
}

std::wstring Text::Message_RegistryOpenFail() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].Message_RegistryOpenFail_;
}

std::wstring Text::Message_CleanFinish() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].Message_CleanFinish_;
}

std::wstring Text::Name() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].Name_;
}

std::wstring Text::Static_Language() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].Static_Language_;
}

std::wstring Text::Static_Size() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].Static_Size_;
}

std::wstring Text::Static_Transparency() {
	INT Language_Index = Registry::Language_Get();
	return TextVector_[Language_Index].Static_Transparency_;
}
