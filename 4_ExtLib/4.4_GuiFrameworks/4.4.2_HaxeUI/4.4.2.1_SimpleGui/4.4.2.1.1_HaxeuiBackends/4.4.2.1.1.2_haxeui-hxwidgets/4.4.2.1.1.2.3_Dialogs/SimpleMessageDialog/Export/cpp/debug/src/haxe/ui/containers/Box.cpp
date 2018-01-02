// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_LayoutFactory
#include <haxe/ui/layouts/LayoutFactory.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_12_new,"haxe.ui.containers.Box","new",0xf4b94f93,"haxe.ui.containers.Box.new","haxe/ui/containers/Box.hx",12,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_21_get_layoutName,"haxe.ui.containers.Box","get_layoutName",0x35d42a0b,"haxe.ui.containers.Box.get_layoutName","haxe/ui/containers/Box.hx",21,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_23_set_layoutName,"haxe.ui.containers.Box","set_layoutName",0x55f4127f,"haxe.ui.containers.Box.set_layoutName","haxe/ui/containers/Box.hx",23,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_45_get_icon,"haxe.ui.containers.Box","get_icon",0x79ef2aef,"haxe.ui.containers.Box.get_icon","haxe/ui/containers/Box.hx",45,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_48_set_icon,"haxe.ui.containers.Box","set_icon",0x284c8463,"haxe.ui.containers.Box.set_icon","haxe/ui/containers/Box.hx",48,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_9abc842916e14e5e_1_cloneComponent,"haxe.ui.containers.Box","cloneComponent",0x0296a14d,"haxe.ui.containers.Box.cloneComponent","src/haxe/ui/containers/Box.hx",1,0x3b613733)
HX_LOCAL_STACK_FRAME(_hx_pos_9abc842916e14e5e_2_self,"haxe.ui.containers.Box","self",0x30ba58f9,"haxe.ui.containers.Box.self","src/haxe/ui/containers/Box.hx",2,0x3b613733)
namespace haxe{
namespace ui{
namespace containers{

void Box_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_12_new)
HXLINE(  13)		super::__construct();
HXLINE(  14)		this->set_layout( ::haxe::ui::layouts::DefaultLayout_obj::__alloc( HX_CTX ));
            	}

Dynamic Box_obj::__CreateEmpty() { return new Box_obj; }

void *Box_obj::_hx_vtable = 0;

Dynamic Box_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Box_obj > _hx_result = new Box_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Box_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x41081cbb) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x41081cbb;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x7140e8dc;
	}
}

::String Box_obj::get_layoutName(){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_21_get_layoutName)
HXDLIN(  21)		return this->_layoutName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,get_layoutName,return )

::String Box_obj::set_layoutName(::String value){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_23_set_layoutName)
HXLINE(  24)		if ((this->_layoutName == value)) {
HXLINE(  25)			return value;
            		}
HXLINE(  28)		this->_layoutName = value;
HXLINE(  29)		this->set_layout(::haxe::ui::layouts::LayoutFactory_obj::createFromName(this->get_layoutName()));
HXLINE(  30)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Box_obj,set_layoutName,return )

::String Box_obj::get_icon(){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_45_get_icon)
HXDLIN(  45)		return this->_icon;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,get_icon,return )

::String Box_obj::set_icon(::String value){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_48_set_icon)
HXLINE(  49)		this->_icon = value;
HXLINE(  50)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Box_obj,set_icon,return )

 ::haxe::ui::core::Component Box_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_9abc842916e14e5e_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::containers::Box c = ( ( ::haxe::ui::containers::Box)(this->super::cloneComponent()) );
HXLINE(   3)		if (hx::IsNotNull( this->get_icon() )) {
HXLINE(   3)			c->set_icon(this->get_icon());
            		}
HXLINE(   5)		return c;
            	}


 ::haxe::ui::core::Component Box_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_9abc842916e14e5e_2_self)
HXDLIN(   2)		return  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Box_obj > Box_obj::__new() {
	hx::ObjectPtr< Box_obj > __this = new Box_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Box_obj > Box_obj::__alloc(hx::Ctx *_hx_ctx) {
	Box_obj *__this = (Box_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Box_obj), true, "haxe.ui.containers.Box"));
	*(void **)__this = Box_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Box_obj::Box_obj()
{
}

void Box_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Box);
	HX_MARK_MEMBER_NAME(_layoutName,"_layoutName");
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Box_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_layoutName,"_layoutName");
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Box_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_icon() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { return hx::Val( _icon ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_icon") ) { return hx::Val( get_icon_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return hx::Val( set_icon_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"layoutName") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_layoutName() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layoutName") ) { return hx::Val( _layoutName ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_layoutName") ) { return hx::Val( get_layoutName_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_layoutName") ) { return hx::Val( set_layoutName_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Box_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_icon(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"layoutName") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_layoutName(inValue.Cast< ::String >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layoutName") ) { _layoutName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Box_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_layoutName","\x34","\xb7","\x28","\xb6"));
	outFields->push(HX_HCSTRING("layoutName","\x15","\xea","\x9e","\xe3"));
	outFields->push(HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8"));
	outFields->push(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Box_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Box_obj,_layoutName),HX_HCSTRING("_layoutName","\x34","\xb7","\x28","\xb6")},
	{hx::fsString,(int)offsetof(Box_obj,_icon),HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Box_obj_sStaticStorageInfo = 0;
#endif

static ::String Box_obj_sMemberFields[] = {
	HX_HCSTRING("_layoutName","\x34","\xb7","\x28","\xb6"),
	HX_HCSTRING("get_layoutName","\x5e","\x72","\x94","\x59"),
	HX_HCSTRING("set_layoutName","\xd2","\x5a","\xb4","\x79"),
	HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8"),
	HX_HCSTRING("get_icon","\x02","\xa3","\x6d","\xc5"),
	HX_HCSTRING("set_icon","\x76","\xfc","\xca","\x73"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void Box_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Box_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Box_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Box_obj::__mClass,"__mClass");
};

#endif

hx::Class Box_obj::__mClass;

void Box_obj::__register()
{
	hx::Object *dummy = new Box_obj;
	Box_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.Box","\x21","\x8a","\x37","\xa2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Box_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Box_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Box_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Box_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Box_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Box_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
