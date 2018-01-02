// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ControlBitmap
#include <haxe/ui/backend/hxwidgets/behaviours/ControlBitmap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_HxWidgetsBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Behaviour
#include <haxe/ui/core/Behaviour.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Button
#include <hx/widgets/Button.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_StaticBitmap
#include <hx/widgets/StaticBitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5e30fdb6e60d3e64_12_new,"haxe.ui.backend.hxwidgets.behaviours.ControlBitmap","new",0xcb173b81,"haxe.ui.backend.hxwidgets.behaviours.ControlBitmap.new","haxe/ui/backend/hxwidgets/behaviours/ControlBitmap.hx",12,0x864afa6e)
HX_LOCAL_STACK_FRAME(_hx_pos_5e30fdb6e60d3e64_13_set,"haxe.ui.backend.hxwidgets.behaviours.ControlBitmap","set",0xcb1b06c3,"haxe.ui.backend.hxwidgets.behaviours.ControlBitmap.set","haxe/ui/backend/hxwidgets/behaviours/ControlBitmap.hx",13,0x864afa6e)
HX_LOCAL_STACK_FRAME(_hx_pos_5e30fdb6e60d3e64_44_get,"haxe.ui.backend.hxwidgets.behaviours.ControlBitmap","get",0xcb11ebb7,"haxe.ui.backend.hxwidgets.behaviours.ControlBitmap.get","haxe/ui/backend/hxwidgets/behaviours/ControlBitmap.hx",44,0x864afa6e)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ControlBitmap_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_5e30fdb6e60d3e64_12_new)
HXDLIN(  12)		super::__construct(component);
            	}

Dynamic ControlBitmap_obj::__CreateEmpty() { return new ControlBitmap_obj; }

void *ControlBitmap_obj::_hx_vtable = 0;

Dynamic ControlBitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ControlBitmap_obj > _hx_result = new ControlBitmap_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ControlBitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d3d9039) {
		if (inClassId<=(int)0x25c11f40) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
		} else {
			return inClassId==(int)0x3d3d9039;
		}
	} else {
		return inClassId==(int)0x7026f411;
	}
}

void ControlBitmap_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_5e30fdb6e60d3e64_13_set)
HXLINE(  14)		this->super::set(value);
HXLINE(  15)		if (hx::IsNull( this->_component->window )) {
HXLINE(  16)			return;
            		}
HXLINE(  19)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value)) {
HXLINE(  20)			return;
            		}
HXLINE(  23)		if (::Std_obj::is(this->_component->window,hx::ClassOf< ::hx::widgets::Button >())) {
HXLINE(  24)			if (hx::IsNotNull( ::haxe::Resource_obj::getBytes(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value)) )) {
HXLINE(  25)				 ::hx::widgets::Button button = ( ( ::hx::widgets::Button)(this->_component->window) );
HXLINE(  26)				button->set_bitmap(::hx::widgets::Bitmap_obj::fromHaxeResource(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value)));
            			}
            		}
            		else {
HXLINE(  28)			if (::Std_obj::is(this->_component->window,hx::ClassOf< ::hx::widgets::StaticBitmap >())) {
HXLINE(  29)				if (hx::IsNotNull( ::haxe::Resource_obj::getBytes(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value)) )) {
HXLINE(  30)					 ::hx::widgets::StaticBitmap bmp = ( ( ::hx::widgets::StaticBitmap)(this->_component->window) );
HXLINE(  31)					bmp->set_bitmap(::hx::widgets::Bitmap_obj::fromHaxeResource(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value)));
HXLINE(  32)					{
HXLINE(  32)						 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  32)						bool _hx_tmp;
HXDLIN(  32)						if (hx::IsNotNull( _this->_layout )) {
HXLINE(  32)							_hx_tmp = (_this->_layoutLocked == true);
            						}
            						else {
HXLINE(  32)							_hx_tmp = true;
            						}
HXDLIN(  32)						if (!(_hx_tmp)) {
HXLINE(  32)							_this->invalidate(HX_("layout",aa,ae,b8,58));
            						}
            					}
            				}
            			}
            		}
            	}


 ::haxe::ui::util::VariantType ControlBitmap_obj::get(){
            	HX_STACKFRAME(&_hx_pos_5e30fdb6e60d3e64_44_get)
HXDLIN(  44)		return null();
            	}



hx::ObjectPtr< ControlBitmap_obj > ControlBitmap_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ControlBitmap_obj > __this = new ControlBitmap_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ControlBitmap_obj > ControlBitmap_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ControlBitmap_obj *__this = (ControlBitmap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ControlBitmap_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ControlBitmap"));
	*(void **)__this = ControlBitmap_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ControlBitmap_obj::ControlBitmap_obj()
{
}

hx::Val ControlBitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ControlBitmap_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ControlBitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String ControlBitmap_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void ControlBitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ControlBitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class ControlBitmap_obj::__mClass;

void ControlBitmap_obj::__register()
{
	hx::Object *dummy = new ControlBitmap_obj;
	ControlBitmap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.behaviours.ControlBitmap","\x0f","\x67","\x19","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ControlBitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ControlBitmap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ControlBitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ControlBitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlBitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
