// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_HxWidgetsBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_NotebookRemoveAllTabs
#include <haxe/ui/backend/hxwidgets/behaviours/NotebookRemoveAllTabs.h>
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
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_hx_widgets_WithImages
#include <hx/widgets/WithImages.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d64241f15cacb9ef_7_new,"haxe.ui.backend.hxwidgets.behaviours.NotebookRemoveAllTabs","new",0x0139f195,"haxe.ui.backend.hxwidgets.behaviours.NotebookRemoveAllTabs.new","haxe/ui/backend/hxwidgets/behaviours/NotebookRemoveAllTabs.hx",7,0xaa5499da)
HX_LOCAL_STACK_FRAME(_hx_pos_d64241f15cacb9ef_8_run,"haxe.ui.backend.hxwidgets.behaviours.NotebookRemoveAllTabs","run",0x013d0880,"haxe.ui.backend.hxwidgets.behaviours.NotebookRemoveAllTabs.run","haxe/ui/backend/hxwidgets/behaviours/NotebookRemoveAllTabs.hx",8,0xaa5499da)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void NotebookRemoveAllTabs_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_d64241f15cacb9ef_7_new)
HXDLIN(   7)		super::__construct(component);
            	}

Dynamic NotebookRemoveAllTabs_obj::__CreateEmpty() { return new NotebookRemoveAllTabs_obj; }

void *NotebookRemoveAllTabs_obj::_hx_vtable = 0;

Dynamic NotebookRemoveAllTabs_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NotebookRemoveAllTabs_obj > _hx_result = new NotebookRemoveAllTabs_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NotebookRemoveAllTabs_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25c11f40) {
		if (inClassId<=(int)0x173fe225) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x173fe225;
		} else {
			return inClassId==(int)0x25c11f40;
		}
	} else {
		return inClassId==(int)0x3d3d9039;
	}
}

void NotebookRemoveAllTabs_obj::run(){
            	HX_STACKFRAME(&_hx_pos_d64241f15cacb9ef_8_run)
HXLINE(   9)		if (hx::IsNull( this->_component->window )) {
HXLINE(  10)			return;
            		}
HXLINE(  13)		 ::hx::widgets::Notebook notebook = hx::TCast<  ::hx::widgets::Notebook >::cast(this->_component->window);
HXLINE(  14)		notebook->deleteAllPages();
            	}



hx::ObjectPtr< NotebookRemoveAllTabs_obj > NotebookRemoveAllTabs_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< NotebookRemoveAllTabs_obj > __this = new NotebookRemoveAllTabs_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< NotebookRemoveAllTabs_obj > NotebookRemoveAllTabs_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	NotebookRemoveAllTabs_obj *__this = (NotebookRemoveAllTabs_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NotebookRemoveAllTabs_obj), true, "haxe.ui.backend.hxwidgets.behaviours.NotebookRemoveAllTabs"));
	*(void **)__this = NotebookRemoveAllTabs_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

NotebookRemoveAllTabs_obj::NotebookRemoveAllTabs_obj()
{
}

hx::Val NotebookRemoveAllTabs_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *NotebookRemoveAllTabs_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *NotebookRemoveAllTabs_obj_sStaticStorageInfo = 0;
#endif

static ::String NotebookRemoveAllTabs_obj_sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void NotebookRemoveAllTabs_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NotebookRemoveAllTabs_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NotebookRemoveAllTabs_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NotebookRemoveAllTabs_obj::__mClass,"__mClass");
};

#endif

hx::Class NotebookRemoveAllTabs_obj::__mClass;

void NotebookRemoveAllTabs_obj::__register()
{
	hx::Object *dummy = new NotebookRemoveAllTabs_obj;
	NotebookRemoveAllTabs_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.behaviours.NotebookRemoveAllTabs","\x23","\x83","\x7a","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NotebookRemoveAllTabs_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(NotebookRemoveAllTabs_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NotebookRemoveAllTabs_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NotebookRemoveAllTabs_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotebookRemoveAllTabs_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotebookRemoveAllTabs_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
