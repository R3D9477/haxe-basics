// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_ListViewIcons
#include <haxe/ui/backend/hxwidgets/ListViewIcons.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_HxWidgetsBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ListViewDataSource
#include <haxe/ui/backend/hxwidgets/behaviours/ListViewDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListView
#include <haxe/ui/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
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
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_ListCtrl
#include <hx/widgets/ListCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_ListItem
#include <hx/widgets/ListItem.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2ad84c00bd25e81b_10_new,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource","new",0x087ca317,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource.new","haxe/ui/backend/hxwidgets/behaviours/ListViewDataSource.hx",10,0x7a95687a)
HX_LOCAL_STACK_FRAME(_hx_pos_2ad84c00bd25e81b_11_set,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource","set",0x08806e59,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource.set","haxe/ui/backend/hxwidgets/behaviours/ListViewDataSource.hx",11,0x7a95687a)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ListViewDataSource_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_2ad84c00bd25e81b_10_new)
HXDLIN(  10)		super::__construct(component);
            	}

Dynamic ListViewDataSource_obj::__CreateEmpty() { return new ListViewDataSource_obj; }

void *ListViewDataSource_obj::_hx_vtable = 0;

Dynamic ListViewDataSource_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ListViewDataSource_obj > _hx_result = new ListViewDataSource_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ListViewDataSource_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d3d9039) {
		if (inClassId<=(int)0x25c11f40) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
		} else {
			return inClassId==(int)0x3d3d9039;
		}
	} else {
		return inClassId==(int)0x4ecbd763;
	}
}

void ListViewDataSource_obj::set( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_2ad84c00bd25e81b_11_set)
HXLINE(  12)		this->super::set(value);
HXLINE(  13)		if (hx::IsNull( this->_component->window )) {
HXLINE(  14)			return;
            		}
HXLINE(  17)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value)) {
HXLINE(  18)			return;
            		}
HXLINE(  21)		 ::haxe::ui::data::DataSource ds = ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(value);
HXLINE(  22)		 ::hx::widgets::ListView view = hx::TCast<  ::hx::widgets::ListView >::cast(this->_component->window);
HXLINE(  24)		{
HXLINE(  24)			int _g1 = (int)0;
HXDLIN(  24)			int _g = ds->get_size();
HXDLIN(  24)			while((_g1 < _g)){
HXLINE(  24)				_g1 = (_g1 + (int)1);
HXDLIN(  24)				int n = (_g1 - (int)1);
HXLINE(  25)				 ::Dynamic item = ds->get(n);
HXLINE(  26)				if (hx::IsNotNull( ( (::String)(item->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)) ) )) {
HXLINE(  27)					::String item1 = ( (::String)(item->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)) );
HXDLIN(  27)					view->addItem( ::hx::widgets::ListItem_obj::__alloc( HX_CTX ,item1,::haxe::ui::backend::hxwidgets::ListViewIcons_obj::get(( ( ::haxe::ui::containers::ListView)(this->_component) ),( (::String)(item->__Field(HX_("icon",79,e7,b2,45),hx::paccDynamic)) ),null()),null(),null()),null());
            				}
            			}
            		}
HXLINE(  31)		this->_component->set(HX_("dataSource",a5,76,d3,1d),ds);
            	}



hx::ObjectPtr< ListViewDataSource_obj > ListViewDataSource_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ListViewDataSource_obj > __this = new ListViewDataSource_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ListViewDataSource_obj > ListViewDataSource_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ListViewDataSource_obj *__this = (ListViewDataSource_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ListViewDataSource_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource"));
	*(void **)__this = ListViewDataSource_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ListViewDataSource_obj::ListViewDataSource_obj()
{
}

hx::Val ListViewDataSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ListViewDataSource_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ListViewDataSource_obj_sStaticStorageInfo = 0;
#endif

static ::String ListViewDataSource_obj_sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void ListViewDataSource_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListViewDataSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ListViewDataSource_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListViewDataSource_obj::__mClass,"__mClass");
};

#endif

hx::Class ListViewDataSource_obj::__mClass;

void ListViewDataSource_obj::__register()
{
	hx::Object *dummy = new ListViewDataSource_obj;
	ListViewDataSource_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource","\xa5","\xcb","\x61","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ListViewDataSource_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ListViewDataSource_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ListViewDataSource_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ListViewDataSource_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListViewDataSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListViewDataSource_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
