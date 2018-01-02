// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogButton
#include <haxe/ui/containers/dialogs/DialogButton.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogOptions
#include <haxe/ui/containers/dialogs/DialogOptions.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6e6230cdc2b3ff12_17_new,"haxe.ui.containers.dialogs.DialogOptions","new",0xfa82dd7b,"haxe.ui.containers.dialogs.DialogOptions.new","haxe/ui/containers/dialogs/DialogOptions.hx",17,0x6dc1e4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_6e6230cdc2b3ff12_59_addStandardButton,"haxe.ui.containers.dialogs.DialogOptions","addStandardButton",0xbdf5dd6b,"haxe.ui.containers.dialogs.DialogOptions.addStandardButton","haxe/ui/containers/dialogs/DialogOptions.hx",59,0x6dc1e4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_6e6230cdc2b3ff12_104_addButton,"haxe.ui.containers.dialogs.DialogOptions","addButton",0xd33eea4e,"haxe.ui.containers.dialogs.DialogOptions.addButton","haxe/ui/containers/dialogs/DialogOptions.hx",104,0x6dc1e4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_6e6230cdc2b3ff12_7_boot,"haxe.ui.containers.dialogs.DialogOptions","boot",0x3017eeb7,"haxe.ui.containers.dialogs.DialogOptions.boot","haxe/ui/containers/dialogs/DialogOptions.hx",7,0x6dc1e4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_6e6230cdc2b3ff12_8_boot,"haxe.ui.containers.dialogs.DialogOptions","boot",0x3017eeb7,"haxe.ui.containers.dialogs.DialogOptions.boot","haxe/ui/containers/dialogs/DialogOptions.hx",8,0x6dc1e4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_6e6230cdc2b3ff12_9_boot,"haxe.ui.containers.dialogs.DialogOptions","boot",0x3017eeb7,"haxe.ui.containers.dialogs.DialogOptions.boot","haxe/ui/containers/dialogs/DialogOptions.hx",9,0x6dc1e4b7)
HX_LOCAL_STACK_FRAME(_hx_pos_6e6230cdc2b3ff12_10_boot,"haxe.ui.containers.dialogs.DialogOptions","boot",0x3017eeb7,"haxe.ui.containers.dialogs.DialogOptions.boot","haxe/ui/containers/dialogs/DialogOptions.hx",10,0x6dc1e4b7)
namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{

void DialogOptions_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6e6230cdc2b3ff12_17_new)
HXDLIN(  17)		this->buttons = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic DialogOptions_obj::__CreateEmpty() { return new DialogOptions_obj; }

void *DialogOptions_obj::_hx_vtable = 0;

Dynamic DialogOptions_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DialogOptions_obj > _hx_result = new DialogOptions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DialogOptions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5039b717;
}

void DialogOptions_obj::addStandardButton(int button){
            	HX_GC_STACKFRAME(&_hx_pos_6e6230cdc2b3ff12_59_addStandardButton)
HXDLIN(  59)		switch((int)(button)){
            			case (int)1: {
HXLINE(  61)				 ::haxe::ui::containers::dialogs::DialogButton b =  ::haxe::ui::containers::dialogs::DialogButton_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  62)				b->text = HX_("OK",1c,45,00,00);
HXLINE(  63)				b->id = (HX_("",00,00,00,00) + (int)1);
HXLINE(  64)				b->styleNames = HX_("dialog-button dialog-button-ok",fb,58,72,1f);
HXLINE(  65)				this->addButton(b);
            			}
            			break;
            			case (int)2: {
HXLINE(  67)				 ::haxe::ui::containers::dialogs::DialogButton b1 =  ::haxe::ui::containers::dialogs::DialogButton_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  68)				b1->text = HX_("Cancel",9a,61,c8,ec);
HXLINE(  69)				b1->id = (HX_("",00,00,00,00) + (int)2);
HXLINE(  70)				b1->styleNames = HX_("dialog-button dialog-button-cancel",d9,c0,c8,43);
HXLINE(  71)				this->addButton(b1);
            			}
            			break;
            			case (int)4: {
HXLINE(  73)				 ::haxe::ui::containers::dialogs::DialogButton b2 =  ::haxe::ui::containers::dialogs::DialogButton_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  74)				b2->text = HX_("Close",98,87,90,db);
HXLINE(  75)				b2->id = (HX_("",00,00,00,00) + (int)4);
HXLINE(  76)				b2->styleNames = HX_("dialog-button dialog-button-close",39,15,ac,7c);
HXLINE(  77)				this->addButton(b2);
            			}
            			break;
            			case (int)8: {
HXLINE(  79)				 ::haxe::ui::containers::dialogs::DialogButton b3 =  ::haxe::ui::containers::dialogs::DialogButton_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  80)				b3->text = HX_("Confirm",e0,c4,8a,dd);
HXLINE(  81)				b3->id = (HX_("",00,00,00,00) + (int)8);
HXLINE(  82)				b3->styleNames = HX_("dialog-button dialog-button-confirm",c1,bc,dd,a6);
HXLINE(  83)				this->addButton(b3);
            			}
            			break;
            			case (int)16: {
HXLINE(  85)				 ::haxe::ui::containers::dialogs::DialogButton b4 =  ::haxe::ui::containers::dialogs::DialogButton_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  86)				b4->text = HX_("Yes",07,e1,43,00);
HXLINE(  87)				b4->id = (HX_("",00,00,00,00) + (int)16);
HXLINE(  88)				b4->styleNames = HX_("dialog-button dialog-button-yes",68,14,a3,64);
HXLINE(  89)				this->addButton(b4);
            			}
            			break;
            			case (int)32: {
HXLINE(  91)				 ::haxe::ui::containers::dialogs::DialogButton b5 =  ::haxe::ui::containers::dialogs::DialogButton_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  92)				b5->text = HX_("No",61,44,00,00);
HXLINE(  93)				b5->id = (HX_("",00,00,00,00) + (int)32);
HXLINE(  94)				b5->styleNames = HX_("dialog-button dialog-button-no",20,58,72,1f);
HXLINE(  95)				this->addButton(b5);
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DialogOptions_obj,addStandardButton,(void))

void DialogOptions_obj::addButton( ::haxe::ui::containers::dialogs::DialogButton button){
            	HX_STACKFRAME(&_hx_pos_6e6230cdc2b3ff12_104_addButton)
HXDLIN( 104)		this->buttons->push(button);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DialogOptions_obj,addButton,(void))

int DialogOptions_obj::ICON_ERROR;

int DialogOptions_obj::ICON_INFO;

int DialogOptions_obj::ICON_WARNING;

int DialogOptions_obj::ICON_QUESTION;


hx::ObjectPtr< DialogOptions_obj > DialogOptions_obj::__new() {
	hx::ObjectPtr< DialogOptions_obj > __this = new DialogOptions_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< DialogOptions_obj > DialogOptions_obj::__alloc(hx::Ctx *_hx_ctx) {
	DialogOptions_obj *__this = (DialogOptions_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DialogOptions_obj), true, "haxe.ui.containers.dialogs.DialogOptions"));
	*(void **)__this = DialogOptions_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DialogOptions_obj::DialogOptions_obj()
{
}

void DialogOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogOptions);
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(icon,"icon");
	HX_MARK_MEMBER_NAME(styleNames,"styleNames");
	HX_MARK_END_CLASS();
}

void DialogOptions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(icon,"icon");
	HX_VISIT_MEMBER_NAME(styleNames,"styleNames");
}

hx::Val DialogOptions_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { return hx::Val( icon ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return hx::Val( title ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { return hx::Val( buttons ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addButton") ) { return hx::Val( addButton_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"styleNames") ) { return hx::Val( styleNames ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addStandardButton") ) { return hx::Val( addStandardButton_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DialogOptions_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { icon=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"styleNames") ) { styleNames=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DialogOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttons","\x41","\x52","\x75","\xca"));
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"));
	outFields->push(HX_HCSTRING("styleNames","\xd7","\xe8","\x7a","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DialogOptions_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DialogOptions_obj,buttons),HX_HCSTRING("buttons","\x41","\x52","\x75","\xca")},
	{hx::fsString,(int)offsetof(DialogOptions_obj,title),HX_HCSTRING("title","\x98","\x15","\x3b","\x10")},
	{hx::fsInt,(int)offsetof(DialogOptions_obj,icon),HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45")},
	{hx::fsString,(int)offsetof(DialogOptions_obj,styleNames),HX_HCSTRING("styleNames","\xd7","\xe8","\x7a","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo DialogOptions_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &DialogOptions_obj::ICON_ERROR,HX_HCSTRING("ICON_ERROR","\x22","\x5b","\x85","\x49")},
	{hx::fsInt,(void *) &DialogOptions_obj::ICON_INFO,HX_HCSTRING("ICON_INFO","\x34","\xb6","\x8d","\x07")},
	{hx::fsInt,(void *) &DialogOptions_obj::ICON_WARNING,HX_HCSTRING("ICON_WARNING","\x36","\x58","\xad","\xd9")},
	{hx::fsInt,(void *) &DialogOptions_obj::ICON_QUESTION,HX_HCSTRING("ICON_QUESTION","\xec","\x3b","\x1d","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String DialogOptions_obj_sMemberFields[] = {
	HX_HCSTRING("buttons","\x41","\x52","\x75","\xca"),
	HX_HCSTRING("title","\x98","\x15","\x3b","\x10"),
	HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"),
	HX_HCSTRING("styleNames","\xd7","\xe8","\x7a","\x16"),
	HX_HCSTRING("addStandardButton","\x10","\x37","\xe0","\x71"),
	HX_HCSTRING("addButton","\xf3","\x96","\x04","\x92"),
	::String(null()) };

static void DialogOptions_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DialogOptions_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DialogOptions_obj::ICON_ERROR,"ICON_ERROR");
	HX_MARK_MEMBER_NAME(DialogOptions_obj::ICON_INFO,"ICON_INFO");
	HX_MARK_MEMBER_NAME(DialogOptions_obj::ICON_WARNING,"ICON_WARNING");
	HX_MARK_MEMBER_NAME(DialogOptions_obj::ICON_QUESTION,"ICON_QUESTION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DialogOptions_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DialogOptions_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DialogOptions_obj::ICON_ERROR,"ICON_ERROR");
	HX_VISIT_MEMBER_NAME(DialogOptions_obj::ICON_INFO,"ICON_INFO");
	HX_VISIT_MEMBER_NAME(DialogOptions_obj::ICON_WARNING,"ICON_WARNING");
	HX_VISIT_MEMBER_NAME(DialogOptions_obj::ICON_QUESTION,"ICON_QUESTION");
};

#endif

hx::Class DialogOptions_obj::__mClass;

static ::String DialogOptions_obj_sStaticFields[] = {
	HX_HCSTRING("ICON_ERROR","\x22","\x5b","\x85","\x49"),
	HX_HCSTRING("ICON_INFO","\x34","\xb6","\x8d","\x07"),
	HX_HCSTRING("ICON_WARNING","\x36","\x58","\xad","\xd9"),
	HX_HCSTRING("ICON_QUESTION","\xec","\x3b","\x1d","\x3c"),
	::String(null())
};

void DialogOptions_obj::__register()
{
	hx::Object *dummy = new DialogOptions_obj;
	DialogOptions_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.dialogs.DialogOptions","\x09","\x04","\xda","\x1d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DialogOptions_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DialogOptions_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DialogOptions_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DialogOptions_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DialogOptions_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogOptions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogOptions_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DialogOptions_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6e6230cdc2b3ff12_7_boot)
HXDLIN(   7)		ICON_ERROR = (int)256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6e6230cdc2b3ff12_8_boot)
HXDLIN(   8)		ICON_INFO = (int)512;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6e6230cdc2b3ff12_9_boot)
HXDLIN(   9)		ICON_WARNING = (int)1024;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6e6230cdc2b3ff12_10_boot)
HXDLIN(  10)		ICON_QUESTION = (int)2048;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs
