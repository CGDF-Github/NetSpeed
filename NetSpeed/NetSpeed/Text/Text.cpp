#include "Text.h"

#include "../Registry/Registry.h"

std::vector<Text>	Text::Vector_Text_(Text::Language::Total);

//public:

VOID Text::Init() {
	Vector_Text_[Language::Chinese_Simplified].Button_Clean_ = L"����";
	Vector_Text_[Language::Chinese_Simplified].Button_CleanAndExit_ = L"�����˳�";
	Vector_Text_[Language::Chinese_Simplified].Button_ColorBackground_ = L"������ɫ";
	Vector_Text_[Language::Chinese_Simplified].Button_ColorText_ = L"������ɫ";
	Vector_Text_[Language::Chinese_Simplified].Dialog_Setting_Caption_ = L"����";
	Vector_Text_[Language::Chinese_Simplified].Menu_Item_Clean_ = L"����ע���";
	Vector_Text_[Language::Chinese_Simplified].Menu_Item_Exit_ = L"�˳�";
	Vector_Text_[Language::Chinese_Simplified].Menu_Item_Hide_ = L"����";
	Vector_Text_[Language::Chinese_Simplified].Menu_Item_Setting_ = L"����";
	Vector_Text_[Language::Chinese_Simplified].Menu_Item_Show_ = L"��ʾ";
	Vector_Text_[Language::Chinese_Simplified].Menu_Item_Startup_ = L"��������";
	Vector_Text_[Language::Chinese_Simplified].Message_AdapterFindFail_ = L"��������ʧ�ܡ�";
	Vector_Text_[Language::Chinese_Simplified].Message_RegistryOpenFail_ = L"��ע���ʧ�ܡ�";
	Vector_Text_[Language::Chinese_Simplified].Name_ = L"��������";
	Vector_Text_[Language::Chinese_Simplified].Static_Language_ = L"����";
	Vector_Text_[Language::Chinese_Simplified].Static_Size_ = L"��С";
	Vector_Text_[Language::Chinese_Simplified].Static_Transparency_ = L"͸���ȣ�";
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
	return Vector_Text_[Language].Name_;
}

//public:

std::wstring Text::Button_Clean() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Button_Clean_;
}

std::wstring Text::Button_CleanAndExit() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Button_CleanAndExit_;
}

std::wstring Text::Button_ColorBackground() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Button_ColorBackground_;
}

std::wstring Text::Button_ColorText() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Button_ColorText_;
}

std::wstring Text::Check_Show() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Check_Show_;
}

std::wstring Text::Check_Startup() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Check_Startup_;
}

std::wstring Text::Dialog_Caption() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Dialog_Setting_Caption_;
}

std::wstring Text::Menu_Item_Clean() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Menu_Item_Clean_;
}

std::wstring Text::Menu_Item_Exit() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Menu_Item_Exit_;
}

std::wstring Text::Menu_Item_Hide() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Menu_Item_Hide_;
}

std::wstring Text::Menu_Item_Setting() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Menu_Item_Setting_;
}

std::wstring Text::Menu_Item_Show() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Menu_Item_Show_;
}

std::wstring Text::Menu_Item_Startup() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Menu_Item_Startup_;
}

std::wstring Text::Message_AdapterFindFail() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Message_AdapterFindFail_;
}

std::wstring Text::Message_RegistryOpenFail() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Message_RegistryOpenFail_;
}

std::wstring Text::Message_CleanFinish() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Message_CleanFinish_;
}

std::wstring Text::Name() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Name_;
}

std::wstring Text::Static_Language() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Static_Language_;
}

std::wstring Text::Static_Size() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Static_Size_;
}

std::wstring Text::Static_Transparency() {
	INT Language_Index = Registry::Language_Get();
	return Vector_Text_[Language_Index].Static_Transparency_;
}
