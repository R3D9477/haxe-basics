// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_Dialog
#include <haxe/ui/containers/dialogs/Dialog.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_MessageDialog
#include <haxe/ui/containers/dialogs/MessageDialog.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bcbea64a2555167c_9_new,"haxe.ui.containers.dialogs.MessageDialog","new",0xa165cc74,"haxe.ui.containers.dialogs.MessageDialog.new","haxe/ui/containers/dialogs/MessageDialog.hx",9,0xf5f7b7de)
HX_LOCAL_STACK_FRAME(_hx_pos_495d84790744f1d2_1_cloneComponent,"haxe.ui.containers.dialogs.MessageDialog","cloneComponent",0xffc2fe0c,"haxe.ui.containers.dialogs.MessageDialog.cloneComponent","src/haxe/ui/containers/dialogs/MessageDialog.hx",1,0xb6adb8f3)
HX_LOCAL_STACK_FRAME(_hx_pos_495d84790744f1d2_2_self,"haxe.ui.containers.dialogs.MessageDialog","self",0x9afb20f8,"haxe.ui.containers.dialogs.MessageDialog.self","src/haxe/ui/containers/dialogs/MessageDialog.hx",2,0xb6adb8f3)
namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{

void MessageDialog_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bcbea64a2555167c_9_new)
HXDLIN(   9)		super::__construct();
            	}

Dynamic MessageDialog_obj::__CreateEmpty() { return new MessageDialog_obj; }

void *MessageDialog_obj::_hx_vtable = 0;

Dynamic MessageDialog_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MessageDialog_obj > _hx_result = new MessageDialog_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MessageDialog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25e97590) {
		if (inClassId<=(int)0x0b312307) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b312307;
		} else {
			return inClassId==(int)0x25e97590;
		}
	} else {
		return inClassId==(int)0x4a06d0bc || inClassId==(int)0x7140e8dc;
	}
}

 ::haxe::ui::core::Component MessageDialog_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_495d84790744f1d2_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::containers::dialogs::MessageDialog c = ( ( ::haxe::ui::containers::dialogs::MessageDialog)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component MessageDialog_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_495d84790744f1d2_2_self)
HXDLIN(   2)		return  ::haxe::ui::containers::dialogs::MessageDialog_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< MessageDialog_obj > MessageDialog_obj::__new() {
	hx::ObjectPtr< MessageDialog_obj > __this = new MessageDialog_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< MessageDialog_obj > MessageDialog_obj::__alloc(hx::Ctx *_hx_ctx) {
	MessageDialog_obj *__this = (MessageDialog_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MessageDialog_obj), true, "haxe.ui.containers.dialogs.MessageDialog"));
	*(void **)__this = MessageDialog_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MessageDialog_obj::MessageDialog_obj()
{
}

hx::Val MessageDialog_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *MessageDialog_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *MessageDialog_obj_sStaticStorageInfo = 0;
#endif

static ::String MessageDialog_obj_sMemberFields[] = {
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void MessageDialog_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MessageDialog_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MessageDialog_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MessageDialog_obj::__mClass,"__mClass");
};

#endif

hx::Class MessageDialog_obj::__mClass;

void MessageDialog_obj::__register()
{
	hx::Object *dummy = new MessageDialog_obj;
	MessageDialog_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.dialogs.MessageDialog","\x82","\xc2","\x89","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MessageDialog_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MessageDialog_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MessageDialog_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MessageDialog_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MessageDialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MessageDialog_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs
