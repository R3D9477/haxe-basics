// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
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
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c73524b62b3bef21_8_new,"haxe.ui.core.InteractiveComponent","new",0xcd714daa,"haxe.ui.core.InteractiveComponent.new","haxe/ui/core/InteractiveComponent.hx",8,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_21_get_focus,"haxe.ui.core.InteractiveComponent","get_focus",0x49404cf9,"haxe.ui.core.InteractiveComponent.get_focus","haxe/ui/core/InteractiveComponent.hx",21,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_23_set_focus,"haxe.ui.core.InteractiveComponent","set_focus",0x2c913905,"haxe.ui.core.InteractiveComponent.set_focus","haxe/ui/core/InteractiveComponent.hx",23,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_43_get_allowFocus,"haxe.ui.core.InteractiveComponent","get_allowFocus",0xdd29f5ce,"haxe.ui.core.InteractiveComponent.get_allowFocus","haxe/ui/core/InteractiveComponent.hx",43,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_45_set_allowFocus,"haxe.ui.core.InteractiveComponent","set_allowFocus",0xfd49de42,"haxe.ui.core.InteractiveComponent.set_allowFocus","haxe/ui/core/InteractiveComponent.hx",45,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_713f3f2b648c96f4_1_cloneComponent,"haxe.ui.core.InteractiveComponent","cloneComponent",0x5e363c96,"haxe.ui.core.InteractiveComponent.cloneComponent","src/haxe/ui/core/InteractiveComponent.hx",1,0x0b258a10)
HX_LOCAL_STACK_FRAME(_hx_pos_713f3f2b648c96f4_2_self,"haxe.ui.core.InteractiveComponent","self",0xf900af02,"haxe.ui.core.InteractiveComponent.self","src/haxe/ui/core/InteractiveComponent.hx",2,0x0b258a10)
namespace haxe{
namespace ui{
namespace core{

void InteractiveComponent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_8_new)
HXLINE(  37)		this->_allowFocus = true;
HXLINE(  13)		this->_focus = false;
HXLINE(  10)		super::__construct();
            	}

Dynamic InteractiveComponent_obj::__CreateEmpty() { return new InteractiveComponent_obj; }

void *InteractiveComponent_obj::_hx_vtable = 0;

Dynamic InteractiveComponent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InteractiveComponent_obj > _hx_result = new InteractiveComponent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InteractiveComponent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5f23eff4) {
		if (inClassId<=(int)0x4a06d0bc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x4a06d0bc;
		} else {
			return inClassId==(int)0x5f23eff4;
		}
	} else {
		return inClassId==(int)0x7140e8dc;
	}
}

static ::haxe::ui::focus::IFocusable_obj _hx_haxe_ui_core_InteractiveComponent__hx_haxe_ui_focus_IFocusable= {
	( bool (hx::Object::*)())&::haxe::ui::core::InteractiveComponent_obj::get_focus,
	( bool (hx::Object::*)(bool))&::haxe::ui::core::InteractiveComponent_obj::set_focus,
	( bool (hx::Object::*)())&::haxe::ui::core::InteractiveComponent_obj::get_allowFocus,
	( bool (hx::Object::*)(bool))&::haxe::ui::core::InteractiveComponent_obj::set_allowFocus,
};

void *InteractiveComponent_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x04f087c7: return &_hx_haxe_ui_core_InteractiveComponent__hx_haxe_ui_focus_IFocusable;
	}
	return super::_hx_getInterface(inHash);
}

bool InteractiveComponent_obj::get_focus(){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_21_get_focus)
HXDLIN(  21)		return this->_focus;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveComponent_obj,get_focus,return )

bool InteractiveComponent_obj::set_focus(bool value){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_23_set_focus)
HXLINE(  24)		bool _hx_tmp;
HXDLIN(  24)		if ((this->_focus != value)) {
HXLINE(  24)			_hx_tmp = (this->get_allowFocus() == false);
            		}
            		else {
HXLINE(  24)			_hx_tmp = true;
            		}
HXDLIN(  24)		if (_hx_tmp) {
HXLINE(  25)			return value;
            		}
HXLINE(  28)		this->_focus = value;
HXLINE(  29)		if ((this->_focus == true)) {
HXLINE(  30)			this->addClass(HX_(":active",80,29,23,82),null(),null());
            		}
            		else {
HXLINE(  32)			this->removeClass(HX_(":active",80,29,23,82),null(),null());
            		}
HXLINE(  34)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveComponent_obj,set_focus,return )

bool InteractiveComponent_obj::get_allowFocus(){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_43_get_allowFocus)
HXDLIN(  43)		return this->_allowFocus;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveComponent_obj,get_allowFocus,return )

bool InteractiveComponent_obj::set_allowFocus(bool value){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_45_set_allowFocus)
HXLINE(  46)		if ((this->_allowFocus == value)) {
HXLINE(  47)			return value;
            		}
HXLINE(  50)		this->_allowFocus = value;
HXLINE(  51)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveComponent_obj,set_allowFocus,return )

 ::haxe::ui::core::Component InteractiveComponent_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_713f3f2b648c96f4_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::core::InteractiveComponent c = ( ( ::haxe::ui::core::InteractiveComponent)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component InteractiveComponent_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_713f3f2b648c96f4_2_self)
HXDLIN(   2)		return  ::haxe::ui::core::InteractiveComponent_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< InteractiveComponent_obj > InteractiveComponent_obj::__new() {
	hx::ObjectPtr< InteractiveComponent_obj > __this = new InteractiveComponent_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< InteractiveComponent_obj > InteractiveComponent_obj::__alloc(hx::Ctx *_hx_ctx) {
	InteractiveComponent_obj *__this = (InteractiveComponent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(InteractiveComponent_obj), true, "haxe.ui.core.InteractiveComponent"));
	*(void **)__this = InteractiveComponent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

InteractiveComponent_obj::InteractiveComponent_obj()
{
}

hx::Val InteractiveComponent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_focus() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_focus") ) { return hx::Val( _focus ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_focus") ) { return hx::Val( get_focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return hx::Val( set_focus_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowFocus") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_allowFocus() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowFocus") ) { return hx::Val( _allowFocus ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_allowFocus") ) { return hx::Val( get_allowFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowFocus") ) { return hx::Val( set_allowFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val InteractiveComponent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_focus(inValue.Cast< bool >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_focus") ) { _focus=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowFocus") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_allowFocus(inValue.Cast< bool >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowFocus") ) { _allowFocus=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractiveComponent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_focus","\x19","\xa7","\x70","\x00"));
	outFields->push(HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"));
	outFields->push(HX_HCSTRING("_allowFocus","\xae","\xe7","\xde","\x01"));
	outFields->push(HX_HCSTRING("allowFocus","\x8f","\x1a","\x55","\x2f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo InteractiveComponent_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(InteractiveComponent_obj,_focus),HX_HCSTRING("_focus","\x19","\xa7","\x70","\x00")},
	{hx::fsBool,(int)offsetof(InteractiveComponent_obj,_allowFocus),HX_HCSTRING("_allowFocus","\xae","\xe7","\xde","\x01")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *InteractiveComponent_obj_sStaticStorageInfo = 0;
#endif

static ::String InteractiveComponent_obj_sMemberFields[] = {
	HX_HCSTRING("_focus","\x19","\xa7","\x70","\x00"),
	HX_HCSTRING("get_focus","\x2f","\xbc","\x32","\x48"),
	HX_HCSTRING("set_focus","\x3b","\xa8","\x83","\x2b"),
	HX_HCSTRING("_allowFocus","\xae","\xe7","\xde","\x01"),
	HX_HCSTRING("get_allowFocus","\xd8","\xa2","\x4a","\xa5"),
	HX_HCSTRING("set_allowFocus","\x4c","\x8b","\x6a","\xc5"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void InteractiveComponent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractiveComponent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InteractiveComponent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractiveComponent_obj::__mClass,"__mClass");
};

#endif

hx::Class InteractiveComponent_obj::__mClass;

void InteractiveComponent_obj::__register()
{
	hx::Object *dummy = new InteractiveComponent_obj;
	InteractiveComponent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.InteractiveComponent","\xb8","\xf0","\xc2","\x08");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = InteractiveComponent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(InteractiveComponent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InteractiveComponent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InteractiveComponent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InteractiveComponent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InteractiveComponent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
