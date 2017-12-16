// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_size_WindowSize
#include <haxe/ui/backend/hxwidgets/size/WindowSize.h>
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
#ifndef INCLUDED_haxe_ui_core_Platform
#include <haxe/ui/core/Platform.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayoutSize
#include <haxe/ui/layouts/DelegateLayoutSize.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_ScrolledWindow
#include <hx/widgets/ScrolledWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_41ca6707efd88008_9_new,"haxe.ui.backend.hxwidgets.size.WindowSize","new",0x164da275,"haxe.ui.backend.hxwidgets.size.WindowSize.new","haxe/ui/backend/hxwidgets/size/WindowSize.hx",9,0x61ce605c)
HX_LOCAL_STACK_FRAME(_hx_pos_41ca6707efd88008_11_get_width,"haxe.ui.backend.hxwidgets.size.WindowSize","get_width",0x69722232,"haxe.ui.backend.hxwidgets.size.WindowSize.get_width","haxe/ui/backend/hxwidgets/size/WindowSize.hx",11,0x61ce605c)
HX_LOCAL_STACK_FRAME(_hx_pos_41ca6707efd88008_15_get_height,"haxe.ui.backend.hxwidgets.size.WindowSize","get_height",0x90bb423b,"haxe.ui.backend.hxwidgets.size.WindowSize.get_height","haxe/ui/backend/hxwidgets/size/WindowSize.hx",15,0x61ce605c)
HX_LOCAL_STACK_FRAME(_hx_pos_41ca6707efd88008_18_get_usableWidthModifier,"haxe.ui.backend.hxwidgets.size.WindowSize","get_usableWidthModifier",0xde491e91,"haxe.ui.backend.hxwidgets.size.WindowSize.get_usableWidthModifier","haxe/ui/backend/hxwidgets/size/WindowSize.hx",18,0x61ce605c)
HX_LOCAL_STACK_FRAME(_hx_pos_41ca6707efd88008_27_get_usableHeightModifier,"haxe.ui.backend.hxwidgets.size.WindowSize","get_usableHeightModifier",0xebebb4ca,"haxe.ui.backend.hxwidgets.size.WindowSize.get_usableHeightModifier","haxe/ui/backend/hxwidgets/size/WindowSize.hx",27,0x61ce605c)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace size{

void WindowSize_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_41ca6707efd88008_9_new)
HXDLIN(   9)		super::__construct();
            	}

Dynamic WindowSize_obj::__CreateEmpty() { return new WindowSize_obj; }

void *WindowSize_obj::_hx_vtable = 0;

Dynamic WindowSize_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WindowSize_obj > _hx_result = new WindowSize_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WindowSize_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x350255fb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x350255fb;
	} else {
		return inClassId==(int)0x77ebf6b7;
	}
}

Float WindowSize_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_41ca6707efd88008_11_get_width)
HXDLIN(  11)		return this->component->window->get_size()->width;
            	}


Float WindowSize_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_41ca6707efd88008_15_get_height)
HXDLIN(  15)		return this->component->window->get_size()->height;
            	}


Float WindowSize_obj::get_usableWidthModifier(){
            	HX_STACKFRAME(&_hx_pos_41ca6707efd88008_18_get_usableWidthModifier)
HXLINE(  19)		bool _hx_tmp;
HXDLIN(  19)		if (::Std_obj::is(this->component->window,hx::ClassOf< ::hx::widgets::ScrolledWindow >())) {
HXLINE(  19)			_hx_tmp = (this->component->get_childComponents()->length > (int)0);
            		}
            		else {
HXLINE(  19)			_hx_tmp = false;
            		}
HXDLIN(  19)		if (_hx_tmp) {
HXLINE(  20)			 ::Dynamic _hx_tmp1 = this->component->get_childComponents()->__get((int)0).StaticCast<  ::haxe::ui::core::Component >()->get_componentHeight();
HXDLIN(  20)			if (hx::IsGreater( _hx_tmp1,this->component->get_componentHeight() )) {
HXLINE(  21)				return ::haxe::ui::core::Platform_obj::get_vscrollWidth();
            			}
            		}
HXLINE(  24)		return (int)0;
            	}


Float WindowSize_obj::get_usableHeightModifier(){
            	HX_STACKFRAME(&_hx_pos_41ca6707efd88008_27_get_usableHeightModifier)
HXLINE(  28)		bool _hx_tmp;
HXDLIN(  28)		if (::Std_obj::is(this->component->window,hx::ClassOf< ::hx::widgets::ScrolledWindow >())) {
HXLINE(  28)			_hx_tmp = (this->component->get_childComponents()->length > (int)0);
            		}
            		else {
HXLINE(  28)			_hx_tmp = false;
            		}
HXDLIN(  28)		if (_hx_tmp) {
HXLINE(  29)			 ::Dynamic _hx_tmp1 = this->component->get_childComponents()->__get((int)0).StaticCast<  ::haxe::ui::core::Component >()->get_componentWidth();
HXDLIN(  29)			if (hx::IsGreater( _hx_tmp1,this->component->get_componentWidth() )) {
HXLINE(  30)				return ::haxe::ui::core::Platform_obj::get_hscrollHeight();
            			}
            		}
HXLINE(  33)		return (int)0;
            	}



hx::ObjectPtr< WindowSize_obj > WindowSize_obj::__new() {
	hx::ObjectPtr< WindowSize_obj > __this = new WindowSize_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< WindowSize_obj > WindowSize_obj::__alloc(hx::Ctx *_hx_ctx) {
	WindowSize_obj *__this = (WindowSize_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(WindowSize_obj), true, "haxe.ui.backend.hxwidgets.size.WindowSize"));
	*(void **)__this = WindowSize_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

WindowSize_obj::WindowSize_obj()
{
}

hx::Val WindowSize_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_usableWidthModifier") ) { return hx::Val( get_usableWidthModifier_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_usableHeightModifier") ) { return hx::Val( get_usableHeightModifier_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *WindowSize_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *WindowSize_obj_sStaticStorageInfo = 0;
#endif

static ::String WindowSize_obj_sMemberFields[] = {
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_usableWidthModifier","\xfc","\xe3","\xaa","\xe8"),
	HX_HCSTRING("get_usableHeightModifier","\xff","\xac","\x16","\xf7"),
	::String(null()) };

static void WindowSize_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowSize_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WindowSize_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowSize_obj::__mClass,"__mClass");
};

#endif

hx::Class WindowSize_obj::__mClass;

void WindowSize_obj::__register()
{
	hx::Object *dummy = new WindowSize_obj;
	WindowSize_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.size.WindowSize","\x03","\x44","\xec","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = WindowSize_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(WindowSize_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WindowSize_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WindowSize_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WindowSize_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WindowSize_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace size
