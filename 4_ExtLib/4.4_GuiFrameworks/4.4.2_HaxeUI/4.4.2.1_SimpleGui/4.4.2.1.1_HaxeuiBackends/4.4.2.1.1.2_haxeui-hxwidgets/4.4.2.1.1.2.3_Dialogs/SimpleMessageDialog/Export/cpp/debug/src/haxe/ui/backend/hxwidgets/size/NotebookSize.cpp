// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_size_NotebookSize
#include <haxe/ui/backend/hxwidgets/size/NotebookSize.h>
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
#ifndef INCLUDED_hx_widgets_BookCtrlBase
#include <hx/widgets/BookCtrlBase.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Notebook
#include <hx/widgets/Notebook.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
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
#ifndef INCLUDED_hx_widgets_WithImages
#include <hx/widgets/WithImages.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0b21bf54338821c1_7_new,"haxe.ui.backend.hxwidgets.size.NotebookSize","new",0x21fd1f20,"haxe.ui.backend.hxwidgets.size.NotebookSize.new","haxe/ui/backend/hxwidgets/size/NotebookSize.hx",7,0x6cfc1451)
HX_LOCAL_STACK_FRAME(_hx_pos_0b21bf54338821c1_9_get_width,"haxe.ui.backend.hxwidgets.size.NotebookSize","get_width",0x0ebcf11d,"haxe.ui.backend.hxwidgets.size.NotebookSize.get_width","haxe/ui/backend/hxwidgets/size/NotebookSize.hx",9,0x6cfc1451)
HX_LOCAL_STACK_FRAME(_hx_pos_0b21bf54338821c1_13_get_height,"haxe.ui.backend.hxwidgets.size.NotebookSize","get_height",0x8ce580f0,"haxe.ui.backend.hxwidgets.size.NotebookSize.get_height","haxe/ui/backend/hxwidgets/size/NotebookSize.hx",13,0x6cfc1451)
HX_LOCAL_STACK_FRAME(_hx_pos_0b21bf54338821c1_16_get_usableWidthModifier,"haxe.ui.backend.hxwidgets.size.NotebookSize","get_usableWidthModifier",0xae9c12bc,"haxe.ui.backend.hxwidgets.size.NotebookSize.get_usableWidthModifier","haxe/ui/backend/hxwidgets/size/NotebookSize.hx",16,0x6cfc1451)
HX_LOCAL_STACK_FRAME(_hx_pos_0b21bf54338821c1_21_get_usableHeightModifier,"haxe.ui.backend.hxwidgets.size.NotebookSize","get_usableHeightModifier",0x642e663f,"haxe.ui.backend.hxwidgets.size.NotebookSize.get_usableHeightModifier","haxe/ui/backend/hxwidgets/size/NotebookSize.hx",21,0x6cfc1451)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace size{

void NotebookSize_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0b21bf54338821c1_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic NotebookSize_obj::__CreateEmpty() { return new NotebookSize_obj; }

void *NotebookSize_obj::_hx_vtable = 0;

Dynamic NotebookSize_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NotebookSize_obj > _hx_result = new NotebookSize_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NotebookSize_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x350255fb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x350255fb;
	} else {
		return inClassId==(int)0x58d816e2;
	}
}

Float NotebookSize_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_0b21bf54338821c1_9_get_width)
HXDLIN(   9)		return this->component->window->get_size()->width;
            	}


Float NotebookSize_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_0b21bf54338821c1_13_get_height)
HXDLIN(  13)		return this->component->window->get_size()->height;
            	}


Float NotebookSize_obj::get_usableWidthModifier(){
            	HX_STACKFRAME(&_hx_pos_0b21bf54338821c1_16_get_usableWidthModifier)
HXLINE(  17)		int m = hx::TCast<  ::hx::widgets::Notebook >::cast(this->component->window)->calcSizeFromPage()->width;
HXLINE(  18)		return m;
            	}


Float NotebookSize_obj::get_usableHeightModifier(){
            	HX_STACKFRAME(&_hx_pos_0b21bf54338821c1_21_get_usableHeightModifier)
HXLINE(  22)		int m = hx::TCast<  ::hx::widgets::Notebook >::cast(this->component->window)->calcSizeFromPage()->height;
HXLINE(  23)		return m;
            	}



hx::ObjectPtr< NotebookSize_obj > NotebookSize_obj::__new() {
	hx::ObjectPtr< NotebookSize_obj > __this = new NotebookSize_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< NotebookSize_obj > NotebookSize_obj::__alloc(hx::Ctx *_hx_ctx) {
	NotebookSize_obj *__this = (NotebookSize_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NotebookSize_obj), true, "haxe.ui.backend.hxwidgets.size.NotebookSize"));
	*(void **)__this = NotebookSize_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NotebookSize_obj::NotebookSize_obj()
{
}

hx::Val NotebookSize_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *NotebookSize_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *NotebookSize_obj_sStaticStorageInfo = 0;
#endif

static ::String NotebookSize_obj_sMemberFields[] = {
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_usableWidthModifier","\xfc","\xe3","\xaa","\xe8"),
	HX_HCSTRING("get_usableHeightModifier","\xff","\xac","\x16","\xf7"),
	::String(null()) };

static void NotebookSize_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NotebookSize_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NotebookSize_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NotebookSize_obj::__mClass,"__mClass");
};

#endif

hx::Class NotebookSize_obj::__mClass;

void NotebookSize_obj::__register()
{
	hx::Object *dummy = new NotebookSize_obj;
	NotebookSize_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.size.NotebookSize","\x2e","\x4f","\x7f","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NotebookSize_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(NotebookSize_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NotebookSize_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NotebookSize_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotebookSize_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotebookSize_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace size
