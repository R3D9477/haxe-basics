// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VGrid
#include <haxe/ui/components/VGrid.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_dfb81407ccea4086_8_new,"haxe.ui.components.VGrid","new",0xa203f3e8,"haxe.ui.components.VGrid.new","haxe/ui/components/VGrid.hx",8,0x9c69d6e9)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb81407ccea4086_17_createDefaults,"haxe.ui.components.VGrid","createDefaults",0x77d34926,"haxe.ui.components.VGrid.createDefaults","haxe/ui/components/VGrid.hx",17,0x9c69d6e9)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb81407ccea4086_28_get_columns,"haxe.ui.components.VGrid","get_columns",0x5c9ef87c,"haxe.ui.components.VGrid.get_columns","haxe/ui/components/VGrid.hx",28,0x9c69d6e9)
HX_LOCAL_STACK_FRAME(_hx_pos_dfb81407ccea4086_31_set_columns,"haxe.ui.components.VGrid","set_columns",0x670bff88,"haxe.ui.components.VGrid.set_columns","haxe/ui/components/VGrid.hx",31,0x9c69d6e9)
HX_LOCAL_STACK_FRAME(_hx_pos_e3ab1de2b5290164_1_cloneComponent,"haxe.ui.components.VGrid","cloneComponent",0x9c55e318,"haxe.ui.components.VGrid.cloneComponent","src/haxe/ui/components/VGrid.hx",1,0x78e19dfe)
HX_LOCAL_STACK_FRAME(_hx_pos_e3ab1de2b5290164_2_self,"haxe.ui.components.VGrid","self",0x24bf7f04,"haxe.ui.components.VGrid.self","src/haxe/ui/components/VGrid.hx",2,0x78e19dfe)
namespace haxe{
namespace ui{
namespace components{

void VGrid_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_dfb81407ccea4086_8_new)
HXLINE(   9)		super::__construct();
HXLINE(  11)		this->set_columns((int)1);
            	}

Dynamic VGrid_obj::__CreateEmpty() { return new VGrid_obj; }

void *VGrid_obj::_hx_vtable = 0;

Dynamic VGrid_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VGrid_obj > _hx_result = new VGrid_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VGrid_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6ca63888) {
		if (inClassId<=(int)0x4a06d0bc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x4a06d0bc;
		} else {
			return inClassId==(int)0x6ca63888;
		}
	} else {
		return inClassId==(int)0x7140e8dc;
	}
}

void VGrid_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_dfb81407ccea4086_17_createDefaults)
HXLINE(  18)		this->super::createDefaults();
HXLINE(  19)		this->_defaultLayout =  ::haxe::ui::layouts::VerticalGridLayout_obj::__alloc( HX_CTX );
            	}


int VGrid_obj::get_columns(){
            	HX_STACKFRAME(&_hx_pos_dfb81407ccea4086_28_get_columns)
HXDLIN(  28)		return this->_columns;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VGrid_obj,get_columns,return )

int VGrid_obj::set_columns(int value){
            	HX_STACKFRAME(&_hx_pos_dfb81407ccea4086_31_set_columns)
HXLINE(  32)		if ((this->_columns != value)) {
HXLINE(  34)			this->_columns = value;
HXLINE(  36)			hx::TCast<  ::haxe::ui::layouts::VerticalGridLayout >::cast(this->get_layout())->set_columns(value);
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


HX_DEFINE_DYNAMIC_FUNC1(VGrid_obj,set_columns,return )

 ::haxe::ui::core::Component VGrid_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_e3ab1de2b5290164_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::VGrid c = ( ( ::haxe::ui::components::VGrid)(this->super::cloneComponent()) );
HXLINE(   3)		c->set_columns(this->get_columns());
HXLINE(   4)		return c;
            	}


 ::haxe::ui::core::Component VGrid_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_e3ab1de2b5290164_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::VGrid_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< VGrid_obj > VGrid_obj::__new() {
	hx::ObjectPtr< VGrid_obj > __this = new VGrid_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VGrid_obj > VGrid_obj::__alloc(hx::Ctx *_hx_ctx) {
	VGrid_obj *__this = (VGrid_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VGrid_obj), true, "haxe.ui.components.VGrid"));
	*(void **)__this = VGrid_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VGrid_obj::VGrid_obj()
{
}

hx::Val VGrid_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_columns() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { return hx::Val( _columns ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_columns") ) { return hx::Val( get_columns_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_columns") ) { return hx::Val( set_columns_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val VGrid_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_columns(inValue.Cast< int >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { _columns=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VGrid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d"));
	outFields->push(HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo VGrid_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(VGrid_obj,_columns),HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *VGrid_obj_sStaticStorageInfo = 0;
#endif

static ::String VGrid_obj_sMemberFields[] = {
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d"),
	HX_HCSTRING("get_columns","\xf4","\x0c","\x54","\x79"),
	HX_HCSTRING("set_columns","\x00","\x14","\xc1","\x83"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void VGrid_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VGrid_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VGrid_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VGrid_obj::__mClass,"__mClass");
};

#endif

hx::Class VGrid_obj::__mClass;

void VGrid_obj::__register()
{
	hx::Object *dummy = new VGrid_obj;
	VGrid_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.VGrid","\xf6","\x1f","\xba","\x0d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VGrid_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VGrid_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VGrid_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VGrid_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VGrid_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VGrid_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
