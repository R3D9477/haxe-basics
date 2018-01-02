// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayBase
#include <haxe/ui/backend/TextDisplayBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cc13979f3b496fd3_25_new,"haxe.ui.backend.TextDisplayBase","new",0x273ecc6c,"haxe.ui.backend.TextDisplayBase.new","haxe/ui/backend/TextDisplayBase.hx",25,0xb48db765)
HX_LOCAL_STACK_FRAME(_hx_pos_cc13979f3b496fd3_28_validateData,"haxe.ui.backend.TextDisplayBase","validateData",0x93b67854,"haxe.ui.backend.TextDisplayBase.validateData","haxe/ui/backend/TextDisplayBase.hx",28,0xb48db765)
HX_LOCAL_STACK_FRAME(_hx_pos_cc13979f3b496fd3_33_validateStyle,"haxe.ui.backend.TextDisplayBase","validateStyle",0x5b8867c7,"haxe.ui.backend.TextDisplayBase.validateStyle","haxe/ui/backend/TextDisplayBase.hx",33,0xb48db765)
HX_LOCAL_STACK_FRAME(_hx_pos_cc13979f3b496fd3_36_validatePosition,"haxe.ui.backend.TextDisplayBase","validatePosition",0x905b1fd3,"haxe.ui.backend.TextDisplayBase.validatePosition","haxe/ui/backend/TextDisplayBase.hx",36,0xb48db765)
HX_LOCAL_STACK_FRAME(_hx_pos_cc13979f3b496fd3_40_validateDisplay,"haxe.ui.backend.TextDisplayBase","validateDisplay",0x54db3e58,"haxe.ui.backend.TextDisplayBase.validateDisplay","haxe/ui/backend/TextDisplayBase.hx",40,0xb48db765)
HX_LOCAL_STACK_FRAME(_hx_pos_cc13979f3b496fd3_44_measureText,"haxe.ui.backend.TextDisplayBase","measureText",0xf818e337,"haxe.ui.backend.TextDisplayBase.measureText","haxe/ui/backend/TextDisplayBase.hx",44,0xb48db765)
namespace haxe{
namespace ui{
namespace backend{

void TextDisplayBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cc13979f3b496fd3_25_new)
            	}

Dynamic TextDisplayBase_obj::__CreateEmpty() { return new TextDisplayBase_obj; }

void *TextDisplayBase_obj::_hx_vtable = 0;

Dynamic TextDisplayBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextDisplayBase_obj > _hx_result = new TextDisplayBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextDisplayBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x43899dcc;
}

void TextDisplayBase_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_cc13979f3b496fd3_28_validateData)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplayBase_obj,validateData,(void))

bool TextDisplayBase_obj::validateStyle(){
            	HX_STACKFRAME(&_hx_pos_cc13979f3b496fd3_33_validateStyle)
HXDLIN(  33)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplayBase_obj,validateStyle,return )

void TextDisplayBase_obj::validatePosition(){
            	HX_STACKFRAME(&_hx_pos_cc13979f3b496fd3_36_validatePosition)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplayBase_obj,validatePosition,(void))

void TextDisplayBase_obj::validateDisplay(){
            	HX_STACKFRAME(&_hx_pos_cc13979f3b496fd3_40_validateDisplay)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplayBase_obj,validateDisplay,(void))

void TextDisplayBase_obj::measureText(){
            	HX_STACKFRAME(&_hx_pos_cc13979f3b496fd3_44_measureText)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplayBase_obj,measureText,(void))


TextDisplayBase_obj::TextDisplayBase_obj()
{
}

void TextDisplayBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextDisplayBase);
	HX_MARK_MEMBER_NAME(parentComponent,"parentComponent");
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_textStyle,"_textStyle");
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_top,"_top");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_textWidth,"_textWidth");
	HX_MARK_MEMBER_NAME(_textHeight,"_textHeight");
	HX_MARK_MEMBER_NAME(_multiline,"_multiline");
	HX_MARK_MEMBER_NAME(_wordWrap,"_wordWrap");
	HX_MARK_MEMBER_NAME(_fontInfo,"_fontInfo");
	HX_MARK_END_CLASS();
}

void TextDisplayBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parentComponent,"parentComponent");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_textStyle,"_textStyle");
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_top,"_top");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_textWidth,"_textWidth");
	HX_VISIT_MEMBER_NAME(_textHeight,"_textHeight");
	HX_VISIT_MEMBER_NAME(_multiline,"_multiline");
	HX_VISIT_MEMBER_NAME(_wordWrap,"_wordWrap");
	HX_VISIT_MEMBER_NAME(_fontInfo,"_fontInfo");
}

hx::Val TextDisplayBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_top") ) { return hx::Val( _top ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return hx::Val( _text ); }
		if (HX_FIELD_EQ(inName,"_left") ) { return hx::Val( _left ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return hx::Val( _width ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return hx::Val( _height ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_wordWrap") ) { return hx::Val( _wordWrap ); }
		if (HX_FIELD_EQ(inName,"_fontInfo") ) { return hx::Val( _fontInfo ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textStyle") ) { return hx::Val( _textStyle ); }
		if (HX_FIELD_EQ(inName,"_textWidth") ) { return hx::Val( _textWidth ); }
		if (HX_FIELD_EQ(inName,"_multiline") ) { return hx::Val( _multiline ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textHeight") ) { return hx::Val( _textHeight ); }
		if (HX_FIELD_EQ(inName,"measureText") ) { return hx::Val( measureText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"validateStyle") ) { return hx::Val( validateStyle_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parentComponent") ) { return hx::Val( parentComponent ); }
		if (HX_FIELD_EQ(inName,"validateDisplay") ) { return hx::Val( validateDisplay_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"validatePosition") ) { return hx::Val( validatePosition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextDisplayBase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_top") ) { _top=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_wordWrap") ) { _wordWrap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontInfo") ) { _fontInfo=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textStyle") ) { _textStyle=inValue.Cast<  ::haxe::ui::styles::Style >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textWidth") ) { _textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_multiline") ) { _multiline=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textHeight") ) { _textHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parentComponent") ) { parentComponent=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextDisplayBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parentComponent","\x33","\xd6","\x77","\x24"));
	outFields->push(HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"));
	outFields->push(HX_HCSTRING("_textStyle","\x05","\xb1","\xad","\x78"));
	outFields->push(HX_HCSTRING("_left","\xe6","\x23","\xc1","\xfa"));
	outFields->push(HX_HCSTRING("_top","\x96","\xab","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_textWidth","\xda","\xc1","\xf2","\xbe"));
	outFields->push(HX_HCSTRING("_textHeight","\x93","\x55","\xc6","\x0b"));
	outFields->push(HX_HCSTRING("_multiline","\xae","\x4e","\xb4","\xf9"));
	outFields->push(HX_HCSTRING("_wordWrap","\x13","\x0c","\x71","\x48"));
	outFields->push(HX_HCSTRING("_fontInfo","\x3c","\x4d","\xcf","\x0f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextDisplayBase_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(TextDisplayBase_obj,parentComponent),HX_HCSTRING("parentComponent","\x33","\xd6","\x77","\x24")},
	{hx::fsString,(int)offsetof(TextDisplayBase_obj,_text),HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00")},
	{hx::fsObject /*::haxe::ui::styles::Style*/ ,(int)offsetof(TextDisplayBase_obj,_textStyle),HX_HCSTRING("_textStyle","\x05","\xb1","\xad","\x78")},
	{hx::fsFloat,(int)offsetof(TextDisplayBase_obj,_left),HX_HCSTRING("_left","\xe6","\x23","\xc1","\xfa")},
	{hx::fsFloat,(int)offsetof(TextDisplayBase_obj,_top),HX_HCSTRING("_top","\x96","\xab","\x23","\x3f")},
	{hx::fsFloat,(int)offsetof(TextDisplayBase_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsFloat,(int)offsetof(TextDisplayBase_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsFloat,(int)offsetof(TextDisplayBase_obj,_textWidth),HX_HCSTRING("_textWidth","\xda","\xc1","\xf2","\xbe")},
	{hx::fsFloat,(int)offsetof(TextDisplayBase_obj,_textHeight),HX_HCSTRING("_textHeight","\x93","\x55","\xc6","\x0b")},
	{hx::fsBool,(int)offsetof(TextDisplayBase_obj,_multiline),HX_HCSTRING("_multiline","\xae","\x4e","\xb4","\xf9")},
	{hx::fsBool,(int)offsetof(TextDisplayBase_obj,_wordWrap),HX_HCSTRING("_wordWrap","\x13","\x0c","\x71","\x48")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextDisplayBase_obj,_fontInfo),HX_HCSTRING("_fontInfo","\x3c","\x4d","\xcf","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextDisplayBase_obj_sStaticStorageInfo = 0;
#endif

static ::String TextDisplayBase_obj_sMemberFields[] = {
	HX_HCSTRING("parentComponent","\x33","\xd6","\x77","\x24"),
	HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"),
	HX_HCSTRING("_textStyle","\x05","\xb1","\xad","\x78"),
	HX_HCSTRING("_left","\xe6","\x23","\xc1","\xfa"),
	HX_HCSTRING("_top","\x96","\xab","\x23","\x3f"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_textWidth","\xda","\xc1","\xf2","\xbe"),
	HX_HCSTRING("_textHeight","\x93","\x55","\xc6","\x0b"),
	HX_HCSTRING("_multiline","\xae","\x4e","\xb4","\xf9"),
	HX_HCSTRING("_wordWrap","\x13","\x0c","\x71","\x48"),
	HX_HCSTRING("_fontInfo","\x3c","\x4d","\xcf","\x0f"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("validateStyle","\xbb","\x64","\x1d","\xb0"),
	HX_HCSTRING("validatePosition","\x5f","\xb3","\x53","\x83"),
	HX_HCSTRING("validateDisplay","\x4c","\x60","\x60","\xb6"),
	HX_HCSTRING("measureText","\x2b","\xfb","\x80","\x50"),
	::String(null()) };

static void TextDisplayBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextDisplayBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextDisplayBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextDisplayBase_obj::__mClass,"__mClass");
};

#endif

hx::Class TextDisplayBase_obj::__mClass;

void TextDisplayBase_obj::__register()
{
	hx::Object *dummy = new TextDisplayBase_obj;
	TextDisplayBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.TextDisplayBase","\x7a","\x66","\xf5","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextDisplayBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextDisplayBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextDisplayBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextDisplayBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextDisplayBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextDisplayBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
