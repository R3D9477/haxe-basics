// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Grid
#include <haxe/ui/containers/Grid.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VerticalGridLayout
#include <haxe/ui/layouts/VerticalGridLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9cb89ff9781b4555_9_new,"haxe.ui.containers.Grid","new",0xb62af6e2,"haxe.ui.containers.Grid.new","haxe/ui/containers/Grid.hx",9,0xfac2cb8d)
HX_LOCAL_STACK_FRAME(_hx_pos_9cb89ff9781b4555_17_get_columns,"haxe.ui.containers.Grid","get_columns",0x52588576,"haxe.ui.containers.Grid.get_columns","haxe/ui/containers/Grid.hx",17,0xfac2cb8d)
HX_LOCAL_STACK_FRAME(_hx_pos_9cb89ff9781b4555_19_set_columns,"haxe.ui.containers.Grid","set_columns",0x5cc58c82,"haxe.ui.containers.Grid.set_columns","haxe/ui/containers/Grid.hx",19,0xfac2cb8d)
HX_LOCAL_STACK_FRAME(_hx_pos_8f823035d52706dd_1_cloneComponent,"haxe.ui.containers.Grid","cloneComponent",0x6f5b2e5e,"haxe.ui.containers.Grid.cloneComponent","src/haxe/ui/containers/Grid.hx",1,0x3d2f3e18)
HX_LOCAL_STACK_FRAME(_hx_pos_8f823035d52706dd_2_self,"haxe.ui.containers.Grid","self",0xb2bb16ca,"haxe.ui.containers.Grid.self","src/haxe/ui/containers/Grid.hx",2,0x3d2f3e18)
namespace haxe{
namespace ui{
namespace containers{

void Grid_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_9cb89ff9781b4555_9_new)
HXLINE(  10)		super::__construct();
HXLINE(  11)		this->set_layout( ::haxe::ui::layouts::VerticalGridLayout_obj::__alloc( HX_CTX ));
HXLINE(  12)		hx::TCast<  ::haxe::ui::layouts::VerticalGridLayout >::cast(this->_layout)->set_columns((int)4);
            	}

Dynamic Grid_obj::__CreateEmpty() { return new Grid_obj; }

void *Grid_obj::_hx_vtable = 0;

Dynamic Grid_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Grid_obj > _hx_result = new Grid_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Grid_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x41081cbb) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x41081cbb;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x7140e8dc || inClassId==(int)0x7e6764b2;
	}
}

int Grid_obj::get_columns(){
            	HX_STACKFRAME(&_hx_pos_9cb89ff9781b4555_17_get_columns)
HXDLIN(  17)		return hx::TCast<  ::haxe::ui::layouts::VerticalGridLayout >::cast(this->_layout)->get_columns();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_columns,return )

int Grid_obj::set_columns(int value){
            	HX_STACKFRAME(&_hx_pos_9cb89ff9781b4555_19_set_columns)
HXLINE(  20)		hx::TCast<  ::haxe::ui::layouts::VerticalGridLayout >::cast(this->_layout)->set_columns(value);
HXLINE(  21)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,set_columns,return )

 ::haxe::ui::core::Component Grid_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_8f823035d52706dd_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::containers::Grid c = ( ( ::haxe::ui::containers::Grid)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component Grid_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_8f823035d52706dd_2_self)
HXDLIN(   2)		return  ::haxe::ui::containers::Grid_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Grid_obj > Grid_obj::__new() {
	hx::ObjectPtr< Grid_obj > __this = new Grid_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Grid_obj > Grid_obj::__alloc(hx::Ctx *_hx_ctx) {
	Grid_obj *__this = (Grid_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Grid_obj), true, "haxe.ui.containers.Grid"));
	*(void **)__this = Grid_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Grid_obj::Grid_obj()
{
}

hx::Val Grid_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_columns() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_columns") ) { return hx::Val( get_columns_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_columns") ) { return hx::Val( set_columns_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Grid_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_columns(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Grid_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Grid_obj_sStaticStorageInfo = 0;
#endif

static ::String Grid_obj_sMemberFields[] = {
	HX_HCSTRING("get_columns","\xf4","\x0c","\x54","\x79"),
	HX_HCSTRING("set_columns","\x00","\x14","\xc1","\x83"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void Grid_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Grid_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

#endif

hx::Class Grid_obj::__mClass;

void Grid_obj::__register()
{
	hx::Object *dummy = new Grid_obj;
	Grid_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.Grid","\xf0","\x9d","\xb1","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Grid_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Grid_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Grid_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Grid_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Grid_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Grid_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
