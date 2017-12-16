// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_size_BestSize
#include <haxe/ui/backend/hxwidgets/size/BestSize.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayoutSize
#include <haxe/ui/layouts/DelegateLayoutSize.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_StaticText
#include <hx/widgets/StaticText.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_23d7e75437724d14_7_new,"haxe.ui.backend.hxwidgets.size.BestSize","new",0xb74f8329,"haxe.ui.backend.hxwidgets.size.BestSize.new","haxe/ui/backend/hxwidgets/size/BestSize.hx",7,0x9ac96fe8)
HX_LOCAL_STACK_FRAME(_hx_pos_23d7e75437724d14_8_get_width,"haxe.ui.backend.hxwidgets.size.BestSize","get_width",0x463381e6,"haxe.ui.backend.hxwidgets.size.BestSize.get_width","haxe/ui/backend/hxwidgets/size/BestSize.hx",8,0x9ac96fe8)
HX_LOCAL_STACK_FRAME(_hx_pos_23d7e75437724d14_15_get_height,"haxe.ui.backend.hxwidgets.size.BestSize","get_height",0xdd2da007,"haxe.ui.backend.hxwidgets.size.BestSize.get_height","haxe/ui/backend/hxwidgets/size/BestSize.hx",15,0x9ac96fe8)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace size{

void BestSize_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_23d7e75437724d14_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic BestSize_obj::__CreateEmpty() { return new BestSize_obj; }

void *BestSize_obj::_hx_vtable = 0;

Dynamic BestSize_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BestSize_obj > _hx_result = new BestSize_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BestSize_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x350255fb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x350255fb;
	} else {
		return inClassId==(int)0x49e0986b;
	}
}

Float BestSize_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_23d7e75437724d14_8_get_width)
HXLINE(   9)		if (hx::IsNull( this->component->window )) {
HXLINE(  10)			return (int)0;
            		}
HXLINE(  12)		return this->component->window->get_bestSize()->width;
            	}


Float BestSize_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_23d7e75437724d14_15_get_height)
HXLINE(  16)		if (hx::IsNull( this->component->window )) {
HXLINE(  17)			return (int)0;
            		}
HXLINE(  20)		bool _hx_tmp;
HXDLIN(  20)		bool _hx_tmp1;
HXDLIN(  20)		if (::Std_obj::is(this->component->window,hx::ClassOf< ::hx::widgets::StaticText >())) {
HXLINE(  20)			_hx_tmp1 = (this->component->get_autoWidth() == false);
            		}
            		else {
HXLINE(  20)			_hx_tmp1 = false;
            		}
HXDLIN(  20)		if (_hx_tmp1) {
HXLINE(  20)			_hx_tmp = (this->component->get_width() > (int)0);
            		}
            		else {
HXLINE(  20)			_hx_tmp = false;
            		}
HXDLIN(  20)		if (_hx_tmp) {
HXLINE(  21)			 ::hx::widgets::StaticText l = ( ( ::hx::widgets::StaticText)(this->component->window) );
HXLINE(  22)			l->wrap(::Std_obj::_hx_int(this->component->get_width()));
            		}
HXLINE(  25)		return this->component->window->get_bestSize()->height;
            	}



hx::ObjectPtr< BestSize_obj > BestSize_obj::__new() {
	hx::ObjectPtr< BestSize_obj > __this = new BestSize_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BestSize_obj > BestSize_obj::__alloc(hx::Ctx *_hx_ctx) {
	BestSize_obj *__this = (BestSize_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BestSize_obj), true, "haxe.ui.backend.hxwidgets.size.BestSize"));
	*(void **)__this = BestSize_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BestSize_obj::BestSize_obj()
{
}

hx::Val BestSize_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BestSize_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BestSize_obj_sStaticStorageInfo = 0;
#endif

static ::String BestSize_obj_sMemberFields[] = {
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	::String(null()) };

static void BestSize_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BestSize_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BestSize_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BestSize_obj::__mClass,"__mClass");
};

#endif

hx::Class BestSize_obj::__mClass;

void BestSize_obj::__register()
{
	hx::Object *dummy = new BestSize_obj;
	BestSize_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.size.BestSize","\xb7","\xba","\x5a","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BestSize_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BestSize_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BestSize_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BestSize_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BestSize_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BestSize_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace size
