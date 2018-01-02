// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogButton
#include <haxe/ui/containers/dialogs/DialogButton.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8585d1c7f35dcace_7_new,"haxe.ui.containers.dialogs.DialogButton","new",0x28469019,"haxe.ui.containers.dialogs.DialogButton.new","haxe/ui/containers/dialogs/DialogButton.hx",7,0x5b245d55)
HX_LOCAL_STACK_FRAME(_hx_pos_8585d1c7f35dcace_8_boot,"haxe.ui.containers.dialogs.DialogButton","boot",0x0d908659,"haxe.ui.containers.dialogs.DialogButton.boot","haxe/ui/containers/dialogs/DialogButton.hx",8,0x5b245d55)
HX_LOCAL_STACK_FRAME(_hx_pos_8585d1c7f35dcace_9_boot,"haxe.ui.containers.dialogs.DialogButton","boot",0x0d908659,"haxe.ui.containers.dialogs.DialogButton.boot","haxe/ui/containers/dialogs/DialogButton.hx",9,0x5b245d55)
HX_LOCAL_STACK_FRAME(_hx_pos_8585d1c7f35dcace_10_boot,"haxe.ui.containers.dialogs.DialogButton","boot",0x0d908659,"haxe.ui.containers.dialogs.DialogButton.boot","haxe/ui/containers/dialogs/DialogButton.hx",10,0x5b245d55)
HX_LOCAL_STACK_FRAME(_hx_pos_8585d1c7f35dcace_11_boot,"haxe.ui.containers.dialogs.DialogButton","boot",0x0d908659,"haxe.ui.containers.dialogs.DialogButton.boot","haxe/ui/containers/dialogs/DialogButton.hx",11,0x5b245d55)
HX_LOCAL_STACK_FRAME(_hx_pos_8585d1c7f35dcace_12_boot,"haxe.ui.containers.dialogs.DialogButton","boot",0x0d908659,"haxe.ui.containers.dialogs.DialogButton.boot","haxe/ui/containers/dialogs/DialogButton.hx",12,0x5b245d55)
HX_LOCAL_STACK_FRAME(_hx_pos_8585d1c7f35dcace_13_boot,"haxe.ui.containers.dialogs.DialogButton","boot",0x0d908659,"haxe.ui.containers.dialogs.DialogButton.boot","haxe/ui/containers/dialogs/DialogButton.hx",13,0x5b245d55)
HX_LOCAL_STACK_FRAME(_hx_pos_8585d1c7f35dcace_15_boot,"haxe.ui.containers.dialogs.DialogButton","boot",0x0d908659,"haxe.ui.containers.dialogs.DialogButton.boot","haxe/ui/containers/dialogs/DialogButton.hx",15,0x5b245d55)
HX_LOCAL_STACK_FRAME(_hx_pos_8585d1c7f35dcace_16_boot,"haxe.ui.containers.dialogs.DialogButton","boot",0x0d908659,"haxe.ui.containers.dialogs.DialogButton.boot","haxe/ui/containers/dialogs/DialogButton.hx",16,0x5b245d55)
namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{

void DialogButton_obj::__construct(::String id,::String text,hx::Null< bool >  __o_closesDialog){
bool closesDialog = __o_closesDialog.Default(true);
            	HX_STACKFRAME(&_hx_pos_8585d1c7f35dcace_7_new)
HXLINE(  41)		this->closesDialog = true;
HXLINE(  44)		this->id = id;
HXLINE(  45)		this->text = text;
HXLINE(  46)		this->closesDialog = closesDialog;
            	}

Dynamic DialogButton_obj::__CreateEmpty() { return new DialogButton_obj; }

void *DialogButton_obj::_hx_vtable = 0;

Dynamic DialogButton_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DialogButton_obj > _hx_result = new DialogButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool DialogButton_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x46cd3a75;
}

int DialogButton_obj::OK;

int DialogButton_obj::CANCEL;

int DialogButton_obj::CLOSE;

int DialogButton_obj::CONFIRM;

int DialogButton_obj::_hx_YES;

int DialogButton_obj::_hx_NO;

int DialogButton_obj::YES_NO;

int DialogButton_obj::YES_NO_CANCEL;


DialogButton_obj::DialogButton_obj()
{
}

void DialogButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogButton);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(icon,"icon");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(styleNames,"styleNames");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(closesDialog,"closesDialog");
	HX_MARK_END_CLASS();
}

void DialogButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(icon,"icon");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(styleNames,"styleNames");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(closesDialog,"closesDialog");
}

hx::Val DialogButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"icon") ) { return hx::Val( icon ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return hx::Val( style ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"styleNames") ) { return hx::Val( styleNames ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"closesDialog") ) { return hx::Val( closesDialog ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DialogButton_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"icon") ) { icon=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"styleNames") ) { styleNames=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"closesDialog") ) { closesDialog=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DialogButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("styleNames","\xd7","\xe8","\x7a","\x16"));
	outFields->push(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));
	outFields->push(HX_HCSTRING("closesDialog","\xe3","\xa0","\x6b","\x12"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DialogButton_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(DialogButton_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsString,(int)offsetof(DialogButton_obj,icon),HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45")},
	{hx::fsString,(int)offsetof(DialogButton_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(DialogButton_obj,styleNames),HX_HCSTRING("styleNames","\xd7","\xe8","\x7a","\x16")},
	{hx::fsString,(int)offsetof(DialogButton_obj,style),HX_HCSTRING("style","\x31","\xa5","\x1d","\x84")},
	{hx::fsBool,(int)offsetof(DialogButton_obj,closesDialog),HX_HCSTRING("closesDialog","\xe3","\xa0","\x6b","\x12")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo DialogButton_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &DialogButton_obj::OK,HX_HCSTRING("OK","\x1c","\x45","\x00","\x00")},
	{hx::fsInt,(void *) &DialogButton_obj::CANCEL,HX_HCSTRING("CANCEL","\x7a","\x99","\xb6","\x6a")},
	{hx::fsInt,(void *) &DialogButton_obj::CLOSE,HX_HCSTRING("CLOSE","\x98","\x4f","\x51","\xc6")},
	{hx::fsInt,(void *) &DialogButton_obj::CONFIRM,HX_HCSTRING("CONFIRM","\xe0","\x70","\x0d","\x90")},
	{hx::fsInt,(void *) &DialogButton_obj::_hx_YES,HX_HCSTRING("YES","\x07","\xc5","\x43","\x00")},
	{hx::fsInt,(void *) &DialogButton_obj::_hx_NO,HX_HCSTRING("NO","\x41","\x44","\x00","\x00")},
	{hx::fsInt,(void *) &DialogButton_obj::YES_NO,HX_HCSTRING("YES_NO","\xb9","\x33","\x8e","\x87")},
	{hx::fsInt,(void *) &DialogButton_obj::YES_NO_CANCEL,HX_HCSTRING("YES_NO_CANCEL","\x80","\x50","\x90","\xe1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String DialogButton_obj_sMemberFields[] = {
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("styleNames","\xd7","\xe8","\x7a","\x16"),
	HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"),
	HX_HCSTRING("closesDialog","\xe3","\xa0","\x6b","\x12"),
	::String(null()) };

static void DialogButton_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DialogButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DialogButton_obj::OK,"OK");
	HX_MARK_MEMBER_NAME(DialogButton_obj::CANCEL,"CANCEL");
	HX_MARK_MEMBER_NAME(DialogButton_obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(DialogButton_obj::CONFIRM,"CONFIRM");
	HX_MARK_MEMBER_NAME(DialogButton_obj::_hx_YES,"YES");
	HX_MARK_MEMBER_NAME(DialogButton_obj::_hx_NO,"NO");
	HX_MARK_MEMBER_NAME(DialogButton_obj::YES_NO,"YES_NO");
	HX_MARK_MEMBER_NAME(DialogButton_obj::YES_NO_CANCEL,"YES_NO_CANCEL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DialogButton_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DialogButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DialogButton_obj::OK,"OK");
	HX_VISIT_MEMBER_NAME(DialogButton_obj::CANCEL,"CANCEL");
	HX_VISIT_MEMBER_NAME(DialogButton_obj::CLOSE,"CLOSE");
	HX_VISIT_MEMBER_NAME(DialogButton_obj::CONFIRM,"CONFIRM");
	HX_VISIT_MEMBER_NAME(DialogButton_obj::_hx_YES,"YES");
	HX_VISIT_MEMBER_NAME(DialogButton_obj::_hx_NO,"NO");
	HX_VISIT_MEMBER_NAME(DialogButton_obj::YES_NO,"YES_NO");
	HX_VISIT_MEMBER_NAME(DialogButton_obj::YES_NO_CANCEL,"YES_NO_CANCEL");
};

#endif

hx::Class DialogButton_obj::__mClass;

static ::String DialogButton_obj_sStaticFields[] = {
	HX_HCSTRING("OK","\x1c","\x45","\x00","\x00"),
	HX_HCSTRING("CANCEL","\x7a","\x99","\xb6","\x6a"),
	HX_HCSTRING("CLOSE","\x98","\x4f","\x51","\xc6"),
	HX_HCSTRING("CONFIRM","\xe0","\x70","\x0d","\x90"),
	HX_HCSTRING("YES","\x07","\xc5","\x43","\x00"),
	HX_HCSTRING("NO","\x41","\x44","\x00","\x00"),
	HX_HCSTRING("YES_NO","\xb9","\x33","\x8e","\x87"),
	HX_HCSTRING("YES_NO_CANCEL","\x80","\x50","\x90","\xe1"),
	::String(null())
};

void DialogButton_obj::__register()
{
	hx::Object *dummy = new DialogButton_obj;
	DialogButton_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.dialogs.DialogButton","\xa7","\x8f","\xac","\xce");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DialogButton_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DialogButton_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DialogButton_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DialogButton_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DialogButton_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogButton_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DialogButton_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8585d1c7f35dcace_8_boot)
HXDLIN(   8)		OK = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8585d1c7f35dcace_9_boot)
HXDLIN(   9)		CANCEL = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8585d1c7f35dcace_10_boot)
HXDLIN(  10)		CLOSE = (int)4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8585d1c7f35dcace_11_boot)
HXDLIN(  11)		CONFIRM = (int)8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8585d1c7f35dcace_12_boot)
HXDLIN(  12)		_hx_YES = (int)16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8585d1c7f35dcace_13_boot)
HXDLIN(  13)		_hx_NO = (int)32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8585d1c7f35dcace_15_boot)
HXDLIN(  15)		YES_NO = (int)48;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8585d1c7f35dcace_16_boot)
HXDLIN(  16)		YES_NO_CANCEL = (int)50;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs
