// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_IconMap
#include <haxe/ui/backend/hxwidgets/IconMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_TabViewIcons
#include <haxe/ui/backend/hxwidgets/TabViewIcons.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TabView
#include <haxe/ui/containers/TabView.h>
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
#ifndef INCLUDED_hx_widgets_ImageList
#include <hx/widgets/ImageList.h>
#endif
#ifndef INCLUDED_hx_widgets_ListCtrl
#include <hx/widgets/ListCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_ListView
#include <hx/widgets/ListView.h>
#endif
#ifndef INCLUDED_hx_widgets_Notebook
#include <hx/widgets/Notebook.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_41b7dad0f5b39a7e_12_get,"haxe.ui.backend.hxwidgets.TabViewIcons","get",0xe7687a43,"haxe.ui.backend.hxwidgets.TabViewIcons.get","haxe/ui/backend/hxwidgets/TabViewIcons.hx",12,0x93829a61)
HX_LOCAL_STACK_FRAME(_hx_pos_41b7dad0f5b39a7e_9_boot,"haxe.ui.backend.hxwidgets.TabViewIcons","boot",0x90bc01e5,"haxe.ui.backend.hxwidgets.TabViewIcons.boot","haxe/ui/backend/hxwidgets/TabViewIcons.hx",9,0x93829a61)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{

void TabViewIcons_obj::__construct() { }

Dynamic TabViewIcons_obj::__CreateEmpty() { return new TabViewIcons_obj; }

void *TabViewIcons_obj::_hx_vtable = 0;

Dynamic TabViewIcons_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TabViewIcons_obj > _hx_result = new TabViewIcons_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabViewIcons_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x02fbe385;
}

 ::haxe::ui::backend::hxwidgets::IconMap TabViewIcons_obj::_map;

int TabViewIcons_obj::get( ::haxe::ui::containers::TabView tabView,::String icon){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::containers::TabView,tabView) HXARGC(1)
            		void _hx_run( ::hx::widgets::ImageList imageList){
            			HX_STACKFRAME(&_hx_pos_41b7dad0f5b39a7e_12_get)
HXLINE(  13)			 ::hx::widgets::ListView window = ( ( ::hx::widgets::ListView)(tabView->window) );
HXLINE(  14)			 ::hx::widgets::Notebook notebook = ( ( ::hx::widgets::Notebook)(tabView->window) );
HXLINE(  15)			notebook->set_imageList(imageList);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_41b7dad0f5b39a7e_12_get)
HXDLIN(  12)		return ::haxe::ui::backend::hxwidgets::TabViewIcons_obj::_map->getImageIndex(tabView,icon, ::Dynamic(new _hx_Closure_0(tabView)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TabViewIcons_obj,get,return )


TabViewIcons_obj::TabViewIcons_obj()
{
}

bool TabViewIcons_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { outValue = ( _map ); return true; }
	}
	return false;
}

bool TabViewIcons_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=ioValue.Cast<  ::haxe::ui::backend::hxwidgets::IconMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TabViewIcons_obj_sMemberStorageInfo = 0;
static hx::StaticInfo TabViewIcons_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::backend::hxwidgets::IconMap*/ ,(void *) &TabViewIcons_obj::_map,HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void TabViewIcons_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TabViewIcons_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TabViewIcons_obj::_map,"_map");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TabViewIcons_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TabViewIcons_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TabViewIcons_obj::_map,"_map");
};

#endif

hx::Class TabViewIcons_obj::__mClass;

static ::String TabViewIcons_obj_sStaticFields[] = {
	HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null())
};

void TabViewIcons_obj::__register()
{
	hx::Object *dummy = new TabViewIcons_obj;
	TabViewIcons_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.TabViewIcons","\x9b","\xbf","\xca","\x53");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TabViewIcons_obj::__GetStatic;
	__mClass->mSetStaticField = &TabViewIcons_obj::__SetStatic;
	__mClass->mMarkFunc = TabViewIcons_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TabViewIcons_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TabViewIcons_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TabViewIcons_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabViewIcons_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabViewIcons_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TabViewIcons_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_41b7dad0f5b39a7e_9_boot)
HXDLIN(   9)		_map =  ::haxe::ui::backend::hxwidgets::IconMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
