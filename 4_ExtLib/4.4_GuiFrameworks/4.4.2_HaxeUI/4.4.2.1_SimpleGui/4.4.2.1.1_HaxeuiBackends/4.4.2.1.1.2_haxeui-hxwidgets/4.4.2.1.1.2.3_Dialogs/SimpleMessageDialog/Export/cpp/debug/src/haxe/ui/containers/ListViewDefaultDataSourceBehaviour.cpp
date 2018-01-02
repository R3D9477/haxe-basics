// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListView
#include <haxe/ui/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListViewDefaultDataSourceBehaviour
#include <haxe/ui/containers/ListViewDefaultDataSourceBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_585f87455acab508_352_new,"haxe.ui.containers.ListViewDefaultDataSourceBehaviour","new",0x186513f6,"haxe.ui.containers.ListViewDefaultDataSourceBehaviour.new","haxe/ui/containers/ListView.hx",352,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_585f87455acab508_353_get,"haxe.ui.containers.ListViewDefaultDataSourceBehaviour","get",0x185fc42c,"haxe.ui.containers.ListViewDefaultDataSourceBehaviour.get","haxe/ui/containers/ListView.hx",353,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_585f87455acab508_361_set,"haxe.ui.containers.ListViewDefaultDataSourceBehaviour","set",0x1868df38,"haxe.ui.containers.ListViewDefaultDataSourceBehaviour.set","haxe/ui/containers/ListView.hx",361,0xe137bf10)
namespace haxe{
namespace ui{
namespace containers{

void ListViewDefaultDataSourceBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_585f87455acab508_352_new)
HXDLIN( 352)		super::__construct(component);
            	}

Dynamic ListViewDefaultDataSourceBehaviour_obj::__CreateEmpty() { return new ListViewDefaultDataSourceBehaviour_obj; }

void *ListViewDefaultDataSourceBehaviour_obj::_hx_vtable = 0;

Dynamic ListViewDefaultDataSourceBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ListViewDefaultDataSourceBehaviour_obj > _hx_result = new ListViewDefaultDataSourceBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ListViewDefaultDataSourceBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x30c61b46;
	}
}

 ::haxe::ui::util::VariantType ListViewDefaultDataSourceBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_585f87455acab508_353_get)
HXLINE( 354)		 ::haxe::ui::containers::ListView listView = hx::TCast<  ::haxe::ui::containers::ListView >::cast(this->_component);
HXLINE( 355)		if (hx::IsNotNull( listView->_dataSource )) {
HXLINE( 356)			listView->_dataSource->onChange = listView->onDataSourceChanged_dyn();
            		}
HXLINE( 358)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource(listView->_dataSource);
            	}


void ListViewDefaultDataSourceBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_585f87455acab508_361_set)
HXLINE( 362)		 ::haxe::ui::containers::ListView listView = hx::TCast<  ::haxe::ui::containers::ListView >::cast(this->_component);
HXLINE( 363)		listView->syncUI();
HXLINE( 364)		if (hx::IsNotNull( listView->_dataSource )) {
HXLINE( 365)			listView->_dataSource->onChange = listView->onDataSourceChanged_dyn();
            		}
            	}



hx::ObjectPtr< ListViewDefaultDataSourceBehaviour_obj > ListViewDefaultDataSourceBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ListViewDefaultDataSourceBehaviour_obj > __this = new ListViewDefaultDataSourceBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ListViewDefaultDataSourceBehaviour_obj > ListViewDefaultDataSourceBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ListViewDefaultDataSourceBehaviour_obj *__this = (ListViewDefaultDataSourceBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ListViewDefaultDataSourceBehaviour_obj), true, "haxe.ui.containers.ListViewDefaultDataSourceBehaviour"));
	*(void **)__this = ListViewDefaultDataSourceBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ListViewDefaultDataSourceBehaviour_obj::ListViewDefaultDataSourceBehaviour_obj()
{
}

hx::Val ListViewDefaultDataSourceBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ListViewDefaultDataSourceBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ListViewDefaultDataSourceBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ListViewDefaultDataSourceBehaviour_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void ListViewDefaultDataSourceBehaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListViewDefaultDataSourceBehaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ListViewDefaultDataSourceBehaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListViewDefaultDataSourceBehaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class ListViewDefaultDataSourceBehaviour_obj::__mClass;

void ListViewDefaultDataSourceBehaviour_obj::__register()
{
	hx::Object *dummy = new ListViewDefaultDataSourceBehaviour_obj;
	ListViewDefaultDataSourceBehaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.ListViewDefaultDataSourceBehaviour","\x04","\xa1","\xaa","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ListViewDefaultDataSourceBehaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ListViewDefaultDataSourceBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ListViewDefaultDataSourceBehaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ListViewDefaultDataSourceBehaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListViewDefaultDataSourceBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListViewDefaultDataSourceBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
