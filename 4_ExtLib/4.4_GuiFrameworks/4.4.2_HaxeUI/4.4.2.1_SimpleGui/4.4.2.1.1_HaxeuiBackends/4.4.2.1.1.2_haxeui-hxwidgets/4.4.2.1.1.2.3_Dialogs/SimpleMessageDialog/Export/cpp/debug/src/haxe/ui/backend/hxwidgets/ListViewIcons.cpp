// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_IconMap
#include <haxe/ui/backend/hxwidgets/IconMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_ListViewIcons
#include <haxe/ui/backend/hxwidgets/ListViewIcons.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListView
#include <haxe/ui/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
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
#ifndef INCLUDED_hx_widgets_ImageList
#include <hx/widgets/ImageList.h>
#endif
#ifndef INCLUDED_hx_widgets_ListCtrl
#include <hx/widgets/ListCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_ListView
#include <hx/widgets/ListView.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_935f82737e55c0a7_10_get,"haxe.ui.backend.hxwidgets.ListViewIcons","get",0x6641fa44,"haxe.ui.backend.hxwidgets.ListViewIcons.get","haxe/ui/backend/hxwidgets/ListViewIcons.hx",10,0x7c435f04)
HX_LOCAL_STACK_FRAME(_hx_pos_935f82737e55c0a7_7_boot,"haxe.ui.backend.hxwidgets.ListViewIcons","boot",0x103282c4,"haxe.ui.backend.hxwidgets.ListViewIcons.boot","haxe/ui/backend/hxwidgets/ListViewIcons.hx",7,0x7c435f04)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{

void ListViewIcons_obj::__construct() { }

Dynamic ListViewIcons_obj::__CreateEmpty() { return new ListViewIcons_obj; }

void *ListViewIcons_obj::_hx_vtable = 0;

Dynamic ListViewIcons_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ListViewIcons_obj > _hx_result = new ListViewIcons_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ListViewIcons_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x455033f2;
}

 ::haxe::ui::backend::hxwidgets::IconMap ListViewIcons_obj::_map;

int ListViewIcons_obj::get( ::haxe::ui::containers::ListView listView,::String icon,hx::Null< bool >  __o_large){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,bool,large, ::haxe::ui::containers::ListView,listView) HXARGC(1)
            		void _hx_run( ::hx::widgets::ImageList imageList){
            			HX_STACKFRAME(&_hx_pos_935f82737e55c0a7_10_get)
HXLINE(  11)			 ::hx::widgets::ListView window = ( ( ::hx::widgets::ListView)(listView->window) );
HXLINE(  12)			if ((large == true)) {
HXLINE(  13)				window->set_largeImageList(imageList);
            			}
            			else {
HXLINE(  15)				window->set_smallImageList(imageList);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

bool large = __o_large.Default(false);
            	HX_STACKFRAME(&_hx_pos_935f82737e55c0a7_10_get)
HXDLIN(  10)		return ::haxe::ui::backend::hxwidgets::ListViewIcons_obj::_map->getImageIndex(listView,icon, ::Dynamic(new _hx_Closure_0(large,listView)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ListViewIcons_obj,get,return )


ListViewIcons_obj::ListViewIcons_obj()
{
}

bool ListViewIcons_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

bool ListViewIcons_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=ioValue.Cast<  ::haxe::ui::backend::hxwidgets::IconMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ListViewIcons_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ListViewIcons_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::backend::hxwidgets::IconMap*/ ,(void *) &ListViewIcons_obj::_map,HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void ListViewIcons_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListViewIcons_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ListViewIcons_obj::_map,"_map");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ListViewIcons_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListViewIcons_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ListViewIcons_obj::_map,"_map");
};

#endif

hx::Class ListViewIcons_obj::__mClass;

static ::String ListViewIcons_obj_sStaticFields[] = {
	HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null())
};

void ListViewIcons_obj::__register()
{
	hx::Object *dummy = new ListViewIcons_obj;
	ListViewIcons_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.ListViewIcons","\x1c","\xeb","\x81","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ListViewIcons_obj::__GetStatic;
	__mClass->mSetStaticField = &ListViewIcons_obj::__SetStatic;
	__mClass->mMarkFunc = ListViewIcons_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ListViewIcons_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ListViewIcons_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ListViewIcons_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListViewIcons_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListViewIcons_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ListViewIcons_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_935f82737e55c0a7_7_boot)
HXDLIN(   7)		_map =  ::haxe::ui::backend::hxwidgets::IconMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
