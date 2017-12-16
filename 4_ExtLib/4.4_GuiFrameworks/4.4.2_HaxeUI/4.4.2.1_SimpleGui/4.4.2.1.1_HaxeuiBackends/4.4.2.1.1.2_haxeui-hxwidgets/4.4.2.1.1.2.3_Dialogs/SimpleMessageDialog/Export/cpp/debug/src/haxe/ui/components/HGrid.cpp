// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HGrid
#include <haxe/ui/components/HGrid.h>
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
#ifndef INCLUDED_haxe_ui_layouts_HorizontalGridLayout
#include <haxe/ui/layouts/HorizontalGridLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_db58dea73dec8eac_8_new,"haxe.ui.components.HGrid","new",0x18d035da,"haxe.ui.components.HGrid.new","haxe/ui/components/HGrid.hx",8,0x7ba79937)
HX_LOCAL_STACK_FRAME(_hx_pos_db58dea73dec8eac_17_createDefaults,"haxe.ui.components.HGrid","createDefaults",0xde524874,"haxe.ui.components.HGrid.createDefaults","haxe/ui/components/HGrid.hx",17,0x7ba79937)
HX_LOCAL_STACK_FRAME(_hx_pos_db58dea73dec8eac_28_get_rows,"haxe.ui.components.HGrid","get_rows",0x446930e8,"haxe.ui.components.HGrid.get_rows","haxe/ui/components/HGrid.hx",28,0x7ba79937)
HX_LOCAL_STACK_FRAME(_hx_pos_db58dea73dec8eac_31_set_rows,"haxe.ui.components.HGrid","set_rows",0xf2c68a5c,"haxe.ui.components.HGrid.set_rows","haxe/ui/components/HGrid.hx",31,0x7ba79937)
HX_LOCAL_STACK_FRAME(_hx_pos_94c261035c79d11b_1_cloneComponent,"haxe.ui.components.HGrid","cloneComponent",0x02d4e266,"haxe.ui.components.HGrid.cloneComponent","src/haxe/ui/components/HGrid.hx",1,0x581f604c)
HX_LOCAL_STACK_FRAME(_hx_pos_94c261035c79d11b_2_self,"haxe.ui.components.HGrid","self",0xa0acf0d2,"haxe.ui.components.HGrid.self","src/haxe/ui/components/HGrid.hx",2,0x581f604c)
namespace haxe{
namespace ui{
namespace components{

void HGrid_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_db58dea73dec8eac_8_new)
HXLINE(   9)		super::__construct();
HXLINE(  11)		this->set_rows((int)1);
            	}

Dynamic HGrid_obj::__CreateEmpty() { return new HGrid_obj; }

void *HGrid_obj::_hx_vtable = 0;

Dynamic HGrid_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HGrid_obj > _hx_result = new HGrid_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HGrid_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5d0a197a) {
		if (inClassId<=(int)0x4a06d0bc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x4a06d0bc;
		} else {
			return inClassId==(int)0x5d0a197a;
		}
	} else {
		return inClassId==(int)0x7140e8dc;
	}
}

void HGrid_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_db58dea73dec8eac_17_createDefaults)
HXLINE(  18)		this->super::createDefaults();
HXLINE(  19)		this->_defaultLayout =  ::haxe::ui::layouts::HorizontalGridLayout_obj::__alloc( HX_CTX );
            	}


int HGrid_obj::get_rows(){
            	HX_STACKFRAME(&_hx_pos_db58dea73dec8eac_28_get_rows)
HXDLIN(  28)		return this->_rows;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HGrid_obj,get_rows,return )

int HGrid_obj::set_rows(int value){
            	HX_STACKFRAME(&_hx_pos_db58dea73dec8eac_31_set_rows)
HXLINE(  32)		if ((this->_rows != value)) {
HXLINE(  34)			this->_rows = value;
HXLINE(  36)			hx::TCast<  ::haxe::ui::layouts::HorizontalGridLayout >::cast(this->get_layout())->set_rows(value);
HXLINE(  37)			bool _hx_tmp;
HXDLIN(  37)			if (hx::IsNotNull( this->_layout )) {
HXLINE(  37)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE(  37)				_hx_tmp = true;
            			}
HXDLIN(  37)			if (!(_hx_tmp)) {
HXLINE(  37)				this->invalidate(HX_("layout",aa,ae,b8,58));
            			}
            		}
HXLINE(  39)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HGrid_obj,set_rows,return )

 ::haxe::ui::core::Component HGrid_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_94c261035c79d11b_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::HGrid c = ( ( ::haxe::ui::components::HGrid)(this->super::cloneComponent()) );
HXLINE(   3)		c->set_rows(this->get_rows());
HXLINE(   4)		return c;
            	}


 ::haxe::ui::core::Component HGrid_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_94c261035c79d11b_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::HGrid_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< HGrid_obj > HGrid_obj::__new() {
	hx::ObjectPtr< HGrid_obj > __this = new HGrid_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< HGrid_obj > HGrid_obj::__alloc(hx::Ctx *_hx_ctx) {
	HGrid_obj *__this = (HGrid_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HGrid_obj), true, "haxe.ui.components.HGrid"));
	*(void **)__this = HGrid_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HGrid_obj::HGrid_obj()
{
}

hx::Val HGrid_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_rows() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rows") ) { return hx::Val( _rows ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_rows") ) { return hx::Val( get_rows_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rows") ) { return hx::Val( set_rows_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val HGrid_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_rows(inValue.Cast< int >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rows") ) { _rows=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HGrid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_rows","\xf8","\x10","\xc0","\xfe"));
	outFields->push(HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HGrid_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HGrid_obj,_rows),HX_HCSTRING("_rows","\xf8","\x10","\xc0","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *HGrid_obj_sStaticStorageInfo = 0;
#endif

static ::String HGrid_obj_sMemberFields[] = {
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("_rows","\xf8","\x10","\xc0","\xfe"),
	HX_HCSTRING("get_rows","\xa2","\xb0","\x69","\xcb"),
	HX_HCSTRING("set_rows","\x16","\x0a","\xc7","\x79"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void HGrid_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HGrid_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HGrid_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HGrid_obj::__mClass,"__mClass");
};

#endif

hx::Class HGrid_obj::__mClass;

void HGrid_obj::__register()
{
	hx::Object *dummy = new HGrid_obj;
	HGrid_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.HGrid","\xe8","\x00","\x1e","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HGrid_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HGrid_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HGrid_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HGrid_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HGrid_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HGrid_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
