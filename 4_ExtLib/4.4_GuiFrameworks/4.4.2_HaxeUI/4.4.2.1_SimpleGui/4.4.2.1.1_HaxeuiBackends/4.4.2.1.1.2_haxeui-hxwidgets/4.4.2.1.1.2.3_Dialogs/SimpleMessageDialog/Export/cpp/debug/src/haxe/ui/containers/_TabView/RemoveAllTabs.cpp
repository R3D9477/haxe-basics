// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TabView
#include <haxe/ui/containers/TabView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_RemoveAllTabs
#include <haxe/ui/containers/_TabView/RemoveAllTabs.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_21be2deeb389b297_276_new,"haxe.ui.containers._TabView.RemoveAllTabs","new",0x37e0f2c4,"haxe.ui.containers._TabView.RemoveAllTabs.new","haxe/ui/containers/TabView.hx",276,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_21be2deeb389b297_277_run,"haxe.ui.containers._TabView.RemoveAllTabs","run",0x37e409af,"haxe.ui.containers._TabView.RemoveAllTabs.run","haxe/ui/containers/TabView.hx",277,0xfd8842ef)
namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{

void RemoveAllTabs_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_21be2deeb389b297_276_new)
HXDLIN( 276)		super::__construct(component);
            	}

Dynamic RemoveAllTabs_obj::__CreateEmpty() { return new RemoveAllTabs_obj; }

void *RemoveAllTabs_obj::_hx_vtable = 0;

Dynamic RemoveAllTabs_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RemoveAllTabs_obj > _hx_result = new RemoveAllTabs_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RemoveAllTabs_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
	} else {
		return inClassId==(int)0x7cdf2ad4;
	}
}

void RemoveAllTabs_obj::run(){
            	HX_STACKFRAME(&_hx_pos_21be2deeb389b297_277_run)
HXLINE( 278)		 ::haxe::ui::containers::TabView tabView = hx::TCast<  ::haxe::ui::containers::TabView >::cast(this->_component);
HXLINE( 279)		if (hx::IsNotNull( tabView->_views )) {
HXLINE( 280)			{
HXLINE( 280)				int _g = (int)0;
HXDLIN( 280)				::Array< ::Dynamic> _g1 = tabView->_views;
HXDLIN( 280)				while((_g < _g1->length)){
HXLINE( 280)					 ::haxe::ui::core::Component view = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 280)					_g = (_g + (int)1);
HXLINE( 281)					tabView->removeComponent(view,null(),null());
            				}
            			}
HXLINE( 283)			tabView->_views = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 285)		tabView->_currentView = null();
HXLINE( 286)		tabView->_pageIndex = (int)-1;
HXLINE( 287)		if (hx::IsNotNull( tabView->_content )) {
HXLINE( 288)			tabView->_content->removeAllComponents(null());
            		}
HXLINE( 290)		if (hx::IsNotNull( tabView->_tabs )) {
HXLINE( 291)			tabView->_tabs->removeAllComponents(null());
HXLINE( 292)			tabView->_tabs->resetSelection();
            		}
            	}



hx::ObjectPtr< RemoveAllTabs_obj > RemoveAllTabs_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< RemoveAllTabs_obj > __this = new RemoveAllTabs_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< RemoveAllTabs_obj > RemoveAllTabs_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	RemoveAllTabs_obj *__this = (RemoveAllTabs_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RemoveAllTabs_obj), true, "haxe.ui.containers._TabView.RemoveAllTabs"));
	*(void **)__this = RemoveAllTabs_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

RemoveAllTabs_obj::RemoveAllTabs_obj()
{
}

hx::Val RemoveAllTabs_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *RemoveAllTabs_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *RemoveAllTabs_obj_sStaticStorageInfo = 0;
#endif

static ::String RemoveAllTabs_obj_sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void RemoveAllTabs_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RemoveAllTabs_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RemoveAllTabs_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RemoveAllTabs_obj::__mClass,"__mClass");
};

#endif

hx::Class RemoveAllTabs_obj::__mClass;

void RemoveAllTabs_obj::__register()
{
	hx::Object *dummy = new RemoveAllTabs_obj;
	RemoveAllTabs_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers._TabView.RemoveAllTabs","\xd2","\x80","\x3f","\xd9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RemoveAllTabs_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RemoveAllTabs_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RemoveAllTabs_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RemoveAllTabs_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RemoveAllTabs_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RemoveAllTabs_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView
