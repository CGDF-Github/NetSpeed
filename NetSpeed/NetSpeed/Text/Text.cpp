#include "Text.h"
#include "../Registry/Registry.h"

INT					Text::Language_ = Text::Language::English;
std::vector<Text>	Text::List_(Text::Language::Total);

//public:

std::wstring Text::Button_Setting_Clean() {
	return List_[Language_].Button_Setting_Clean_;
}

std::wstring Text::Button_Setting_CleanAndExit() {
	return List_[Language_].Button_Setting_CleanAndExit_;
}

std::wstring Text::Check_Setting_Show() {
	return List_[Language_].Check_Setting_Show_;
}

std::wstring Text::Check_Setting_Startup() {
	return List_[Language_].Check_Setting_Startup_;
}

std::wstring Text::Dialog_Setting_Caption() {
	return List_[Language_].Dialog_Setting_Caption_;
}

VOID Text::Init() {
	List_[Language::Chinese_Simplified].Menu_Item_Clean_ = L"����ע���";
	List_[Language::Chinese_Simplified].Menu_Item_Exit_ = L"�˳�";
	List_[Language::Chinese_Simplified].Menu_Item_Hide_ = L"����";
	List_[Language::Chinese_Simplified].Menu_Item_Setting_ = L"����";
	List_[Language::Chinese_Simplified].Menu_Item_Show_ = L"��ʾ";
	List_[Language::Chinese_Simplified].Menu_Item_Startup_ = L"��������";
	List_[Language::Chinese_Simplified].Message_AdapterFindFail_ = L"��������ʧ�ܡ�";
	List_[Language::Chinese_Simplified].Message_RegistryOpenFail_ = L"��ע���ʧ�ܡ�";
	List_[Language::Chinese_Simplified].Name_ = L"��������";
	List_[Language::Chinese_Simplified].Button_Setting_Clean_ = L"����";
	List_[Language::Chinese_Simplified].Button_Setting_CleanAndExit_ = L"�����˳�";
	List_[Language::Chinese_Simplified].Dialog_Setting_Caption_ = L"����";
	List_[Language::Chinese_Simplified].Static_Setting_Language_ = L"����";
	List_[Language::Chinese_Simplified].Static_Setting_Transparency_ = L"͸���ȣ�";
	std::wstring Language = Registry::Language_Get();
	for (INT Index = 0; Index <= Language::Total - 1; Index++) {
		if (Name(Index) == Language) {
			Language_ = Index;
			break;
		}
	}
	Registry::Language_Save();
}

INT Text::Language_Get() {
	return Language_;
}

VOID Text::Language_Set(INT Language) {
	Language_ = Language;
	Registry::Language_Save();
}

std::wstring Text::Menu_Item_Clean() {
	return List_[Language_].Menu_Item_Clean_;
}

std::wstring Text::Menu_Item_Exit() {
	return List_[Language_].Menu_Item_Exit_;
}

std::wstring Text::Menu_Item_Hide() {
	return List_[Language_].Menu_Item_Hide_;
}

std::wstring Text::Menu_Item_Setting() {
	return List_[Language_].Menu_Item_Setting_;
}

std::wstring Text::Menu_Item_Show() {
	return List_[Language_].Menu_Item_Show_;
}

std::wstring Text::Menu_Item_Startup() {
	return List_[Language_].Menu_Item_Startup_;
}

std::wstring Text::Message_AdapterFindFail() {
	return List_[Language_].Message_AdapterFindFail_;
}

std::wstring Text::Message_RegistryOpenFail() {
	return List_[Language_].Message_RegistryOpenFail_;
}

std::wstring Text::Message_CleanFinish() {
	return List_[Language_].Message_CleanFinish_;
}

std::wstring Text::Name() {
	return List_[Language_].Name_;
}

std::wstring Text::Name(INT Language) {
	return List_[Language].Name_;
}

std::wstring Text::Static_Setting_Language() {
	return List_[Language_].Static_Setting_Language_;
}

std::wstring Text::Static_Setting_Transparency() {
	return List_[Language_].Static_Setting_Transparency_;
}
