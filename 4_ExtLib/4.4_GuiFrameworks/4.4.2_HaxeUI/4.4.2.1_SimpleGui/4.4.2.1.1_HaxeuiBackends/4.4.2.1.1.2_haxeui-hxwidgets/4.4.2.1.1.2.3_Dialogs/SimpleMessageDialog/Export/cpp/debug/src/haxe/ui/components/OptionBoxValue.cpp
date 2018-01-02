// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBoxValue
#include <haxe/ui/components/OptionBoxValue.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_62859e81a7ded738_342_new,"haxe.ui.components.OptionBoxValue","new",0xeb738e93,"haxe.ui.components.OptionBoxValue.new","haxe/ui/components/OptionBox.hx",342,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_62859e81a7ded738_354_applyStyle,"haxe.ui.components.OptionBoxValue","applyStyle",0x4befdf10,"haxe.ui.components.OptionBoxValue.applyStyle","haxe/ui/components/OptionBox.hx",354,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_d67aa6833a240b72_1_cloneComponent,"haxe.ui.components.OptionBoxValue","cloneComponent",0x8e16c24d,"haxe.ui.components.OptionBoxValue.cloneComponent","src/haxe/ui/components/OptionBoxValue.hx",1,0x08f7a807)
HX_LOCAL_STACK_FRAME(_hx_pos_d67aa6833a240b72_2_self,"haxe.ui.components.OptionBoxValue","self",0x1cf739f9,"haxe.ui.components.OptionBoxValue.self","src/haxe/ui/components/OptionBoxValue.hx",2,0x08f7a807)
namespace haxe{
namespace ui{
namespace components{

void OptionBoxValue_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_62859e81a7ded738_342_new)
HXLINE( 343)		super::__construct();
HXLINE( 348)		this->_icon =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE( 349)		this->_icon->set_id(HX_("optionbox-icon",b0,4c,07,ae));
HXLINE( 350)		this->_icon->addClass(HX_("optionbox-icon",b0,4c,07,ae),null(),null());
HXLINE( 351)		this->addComponent(this->_icon);
            	}

Dynamic OptionBoxValue_obj::__CreateEmpty() { return new OptionBoxValue_obj; }

void *OptionBoxValue_obj::_hx_vtable = 0;

Dynamic OptionBoxValue_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OptionBoxValue_obj > _hx_result = new OptionBoxValue_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OptionBoxValue_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x0a6f8e4f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a6f8e4f;
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x5f23eff4 || inClassId==(int)0x7140e8dc;
	}
}

void OptionBoxValue_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_62859e81a7ded738_354_applyStyle)
HXLINE( 355)		this->super::applyStyle(style);
HXLINE( 356)		if (hx::IsNotNull( this->_icon )) {
HXLINE( 357)			this->_icon->set_resource(style->icon);
            		}
            	}


 ::haxe::ui::core::Component OptionBoxValue_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_d67aa6833a240b72_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::OptionBoxValue c = ( ( ::haxe::ui::components::OptionBoxValue)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component OptionBoxValue_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_d67aa6833a240b72_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::OptionBoxValue_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< OptionBoxValue_obj > OptionBoxValue_obj::__new() {
	hx::ObjectPtr< OptionBoxValue_obj > __this = new OptionBoxValue_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< OptionBoxValue_obj > OptionBoxValue_obj::__alloc(hx::Ctx *_hx_ctx) {
	OptionBoxValue_obj *__this = (OptionBoxValue_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OptionBoxValue_obj), true, "haxe.ui.components.OptionBoxValue"));
	*(void **)__this = OptionBoxValue_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

OptionBoxValue_obj::OptionBoxValue_obj()
{
}

void OptionBoxValue_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionBoxValue);
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionBoxValue_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val OptionBoxValue_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { return hx::Val( _icon ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return hx::Val( applyStyle_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val OptionBoxValue_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast<  ::haxe::ui::components::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionBoxValue_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo OptionBoxValue_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::components::Image*/ ,(int)offsetof(OptionBoxValue_obj,_icon),HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *OptionBoxValue_obj_sStaticStorageInfo = 0;
#endif

static ::String OptionBoxValue_obj_sMemberFields[] = {
	HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void OptionBoxValue_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionBoxValue_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OptionBoxValue_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionBoxValue_obj::__mClass,"__mClass");
};

#endif

hx::Class OptionBoxValue_obj::__mClass;

void OptionBoxValue_obj::__register()
{
	hx::Object *dummy = new OptionBoxValue_obj;
	OptionBoxValue_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.OptionBoxValue","\x21","\x49","\x26","\x01");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OptionBoxValue_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OptionBoxValue_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OptionBoxValue_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OptionBoxValue_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionBoxValue_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionBoxValue_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
