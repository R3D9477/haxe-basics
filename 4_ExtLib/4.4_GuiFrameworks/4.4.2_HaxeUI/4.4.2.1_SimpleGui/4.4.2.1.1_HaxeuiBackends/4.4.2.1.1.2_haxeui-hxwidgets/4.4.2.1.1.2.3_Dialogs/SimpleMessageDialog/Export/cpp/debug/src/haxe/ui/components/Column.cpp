// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Column
#include <haxe/ui/components/Column.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a1c63a8a58322222_5_new,"haxe.ui.components.Column","new",0xb60a5aee,"haxe.ui.components.Column.new","haxe/ui/components/Column.hx",5,0xb3ad9ac1)
HX_LOCAL_STACK_FRAME(_hx_pos_a1c63a8a58322222_10_get_sortable,"haxe.ui.components.Column","get_sortable",0xbf9b03b3,"haxe.ui.components.Column.get_sortable","haxe/ui/components/Column.hx",10,0xb3ad9ac1)
HX_LOCAL_STACK_FRAME(_hx_pos_a1c63a8a58322222_12_set_sortable,"haxe.ui.components.Column","set_sortable",0xd4942727,"haxe.ui.components.Column.set_sortable","haxe/ui/components/Column.hx",12,0xb3ad9ac1)
HX_LOCAL_STACK_FRAME(_hx_pos_db8a9e8ceac0be3d_1_cloneComponent,"haxe.ui.components.Column","cloneComponent",0x29a76dd2,"haxe.ui.components.Column.cloneComponent","src/haxe/ui/components/Column.hx",1,0xc004060c)
HX_LOCAL_STACK_FRAME(_hx_pos_db8a9e8ceac0be3d_2_self,"haxe.ui.components.Column","self",0x96533d3e,"haxe.ui.components.Column.self","src/haxe/ui/components/Column.hx",2,0xc004060c)
namespace haxe{
namespace ui{
namespace components{

void Column_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a1c63a8a58322222_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic Column_obj::__CreateEmpty() { return new Column_obj; }

void *Column_obj::_hx_vtable = 0;

Dynamic Column_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Column_obj > _hx_result = new Column_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Column_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x23718646) {
			if (inClassId<=(int)0x101c732a) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x101c732a;
			} else {
				return inClassId==(int)0x23718646;
			}
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x5f23eff4 || inClassId==(int)0x7140e8dc;
	}
}

bool Column_obj::get_sortable(){
            	HX_STACKFRAME(&_hx_pos_a1c63a8a58322222_10_get_sortable)
HXDLIN(  10)		return this->hasClass(HX_("sortable",f8,9b,0a,59));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Column_obj,get_sortable,return )

bool Column_obj::set_sortable(bool value){
            	HX_STACKFRAME(&_hx_pos_a1c63a8a58322222_12_set_sortable)
HXLINE(  13)		if ((value == true)) {
HXLINE(  14)			this->addClass(HX_("sortable",f8,9b,0a,59),null(),null());
            		}
            		else {
HXLINE(  16)			this->removeClass(HX_("sortable",f8,9b,0a,59),null(),null());
            		}
HXLINE(  18)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Column_obj,set_sortable,return )

 ::haxe::ui::core::Component Column_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_db8a9e8ceac0be3d_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::Column c = ( ( ::haxe::ui::components::Column)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component Column_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_db8a9e8ceac0be3d_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::Column_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Column_obj > Column_obj::__new() {
	hx::ObjectPtr< Column_obj > __this = new Column_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Column_obj > Column_obj::__alloc(hx::Ctx *_hx_ctx) {
	Column_obj *__this = (Column_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Column_obj), true, "haxe.ui.components.Column"));
	*(void **)__this = Column_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Column_obj::Column_obj()
{
}

hx::Val Column_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sortable") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_sortable() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_sortable") ) { return hx::Val( get_sortable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_sortable") ) { return hx::Val( set_sortable_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Column_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"sortable") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_sortable(inValue.Cast< bool >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Column_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("sortable","\xf8","\x9b","\x0a","\x59"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Column_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Column_obj_sStaticStorageInfo = 0;
#endif

static ::String Column_obj_sMemberFields[] = {
	HX_HCSTRING("get_sortable","\x01","\x50","\x24","\x0e"),
	HX_HCSTRING("set_sortable","\x75","\x73","\x1d","\x23"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void Column_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Column_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Column_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Column_obj::__mClass,"__mClass");
};

#endif

hx::Class Column_obj::__mClass;

void Column_obj::__register()
{
	hx::Object *dummy = new Column_obj;
	Column_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.Column","\xfc","\x0b","\x73","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Column_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Column_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Column_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Column_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Column_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Column_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
