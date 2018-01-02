// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalContinuousLayout
#include <haxe/ui/layouts/HorizontalContinuousLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalLayout
#include <haxe/ui/layouts/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_27a8c01e4f733fda_11_new,"haxe.ui.containers.HBox","new",0x0d7ee91f,"haxe.ui.containers.HBox.new","haxe/ui/containers/HBox.hx",11,0x74d6aff0)
HX_LOCAL_STACK_FRAME(_hx_pos_27a8c01e4f733fda_18_get_continuous,"haxe.ui.containers.HBox","get_continuous",0xd0db3ef9,"haxe.ui.containers.HBox.get_continuous","haxe/ui/containers/HBox.hx",18,0x74d6aff0)
HX_LOCAL_STACK_FRAME(_hx_pos_27a8c01e4f733fda_20_set_continuous,"haxe.ui.containers.HBox","set_continuous",0xf0fb276d,"haxe.ui.containers.HBox.set_continuous","haxe/ui/containers/HBox.hx",20,0x74d6aff0)
HX_LOCAL_STACK_FRAME(_hx_pos_b4224efb847410f7_1_cloneComponent,"haxe.ui.containers.HBox","cloneComponent",0xa3259b41,"haxe.ui.containers.HBox.cloneComponent","src/haxe/ui/containers/HBox.hx",1,0xb743227b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4224efb847410f7_2_self,"haxe.ui.containers.HBox","self",0xc4db19ed,"haxe.ui.containers.HBox.self","src/haxe/ui/containers/HBox.hx",2,0xb743227b)
namespace haxe{
namespace ui{
namespace containers{

void HBox_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_27a8c01e4f733fda_11_new)
HXLINE(  12)		super::__construct();
HXLINE(  13)		this->set_layout( ::haxe::ui::layouts::HorizontalLayout_obj::__alloc( HX_CTX ));
            	}

Dynamic HBox_obj::__CreateEmpty() { return new HBox_obj; }

void *HBox_obj::_hx_vtable = 0;

Dynamic HBox_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HBox_obj > _hx_result = new HBox_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x41081cbb) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x41081cbb;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x7140e8dc || inClassId==(int)0x7eec346f;
	}
}

bool HBox_obj::get_continuous(){
            	HX_STACKFRAME(&_hx_pos_27a8c01e4f733fda_18_get_continuous)
HXDLIN(  18)		return ::Std_obj::is(this->_layout,hx::ClassOf< ::haxe::ui::layouts::HorizontalContinuousLayout >());
            	}


HX_DEFINE_DYNAMIC_FUNC0(HBox_obj,get_continuous,return )

bool HBox_obj::set_continuous(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_27a8c01e4f733fda_20_set_continuous)
HXLINE(  21)		if ((value == true)) {
HXLINE(  22)			this->set_layout( ::haxe::ui::layouts::HorizontalContinuousLayout_obj::__alloc( HX_CTX ));
            		}
            		else {
HXLINE(  24)			this->set_layout( ::haxe::ui::layouts::HorizontalLayout_obj::__alloc( HX_CTX ));
            		}
HXLINE(  26)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HBox_obj,set_continuous,return )

 ::haxe::ui::core::Component HBox_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_b4224efb847410f7_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::containers::HBox c = ( ( ::haxe::ui::containers::HBox)(this->super::cloneComponent()) );
HXLINE(   3)		c->set_continuous(this->get_continuous());
HXLINE(   4)		return c;
            	}


 ::haxe::ui::core::Component HBox_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_b4224efb847410f7_2_self)
HXDLIN(   2)		return  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< HBox_obj > HBox_obj::__new() {
	hx::ObjectPtr< HBox_obj > __this = new HBox_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< HBox_obj > HBox_obj::__alloc(hx::Ctx *_hx_ctx) {
	HBox_obj *__this = (HBox_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HBox_obj), true, "haxe.ui.containers.HBox"));
	*(void **)__this = HBox_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HBox_obj::HBox_obj()
{
}

hx::Val HBox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"continuous") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_continuous() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_continuous") ) { return hx::Val( get_continuous_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_continuous") ) { return hx::Val( set_continuous_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val HBox_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"continuous") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_continuous(inValue.Cast< bool >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("continuous","\x0f","\x05","\x17","\xde"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *HBox_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HBox_obj_sStaticStorageInfo = 0;
#endif

static ::String HBox_obj_sMemberFields[] = {
	HX_HCSTRING("get_continuous","\x58","\x8d","\x0c","\x54"),
	HX_HCSTRING("set_continuous","\xcc","\x75","\x2c","\x74"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void HBox_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HBox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HBox_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HBox_obj::__mClass,"__mClass");
};

#endif

hx::Class HBox_obj::__mClass;

void HBox_obj::__register()
{
	hx::Object *dummy = new HBox_obj;
	HBox_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.HBox","\xad","\x6d","\x36","\x52");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HBox_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HBox_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HBox_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HBox_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HBox_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
