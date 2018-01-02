// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Progress
#include <haxe/ui/components/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VProgressLayout
#include <haxe/ui/components/VProgressLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_91cb3b7bd3e1f48d_40_new,"haxe.ui.components.VProgressLayout","new",0xf9311fd9,"haxe.ui.components.VProgressLayout.new","haxe/ui/components/VProgress.hx",40,0xd642ece2)
HX_LOCAL_STACK_FRAME(_hx_pos_91cb3b7bd3e1f48d_43_resizeChildren,"haxe.ui.components.VProgressLayout","resizeChildren",0x91c2247a,"haxe.ui.components.VProgressLayout.resizeChildren","haxe/ui/components/VProgress.hx",43,0xd642ece2)
HX_LOCAL_STACK_FRAME(_hx_pos_91cb3b7bd3e1f48d_74_repositionChildren,"haxe.ui.components.VProgressLayout","repositionChildren",0x26fe0162,"haxe.ui.components.VProgressLayout.repositionChildren","haxe/ui/components/VProgress.hx",74,0xd642ece2)
namespace haxe{
namespace ui{
namespace components{

void VProgressLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_91cb3b7bd3e1f48d_40_new)
HXDLIN(  40)		super::__construct();
            	}

Dynamic VProgressLayout_obj::__CreateEmpty() { return new VProgressLayout_obj; }

void *VProgressLayout_obj::_hx_vtable = 0;

Dynamic VProgressLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VProgressLayout_obj > _hx_result = new VProgressLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VProgressLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x258d7d5d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x258d7d5d;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void VProgressLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_91cb3b7bd3e1f48d_43_resizeChildren)
HXLINE(  44)		this->super::resizeChildren();
HXLINE(  46)		 ::haxe::ui::core::Component value = this->get_component()->findComponent(HX_("progress-value",91,33,07,01),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  47)		 ::haxe::ui::components::Progress progress = ( ( ::haxe::ui::components::Progress)(this->get_component()) );
HXLINE(  48)		if (hx::IsNotNull( value )) {
HXLINE(  49)			Float ucy = this->get_usableHeight();
HXLINE(  51)			Float cy = (int)0;
HXLINE(  52)			if ((progress->get_indeterminate() == false)) {
HXLINE(  53)				Float cy1 = progress->get_pos();
HXDLIN(  53)				Float cy2 = (cy1 - progress->get_min());
HXDLIN(  53)				Float cy3 = progress->get_max();
HXDLIN(  53)				cy = (((Float)cy2 / (Float)(cy3 - progress->get_min())) * ucy);
            			}
            			else {
HXLINE(  55)				Float cy4 = progress->get_rangeEnd();
HXDLIN(  55)				Float cy5 = (cy4 - progress->get_rangeStart());
HXDLIN(  55)				Float cy6 = (cy5 - progress->get_min());
HXDLIN(  55)				Float cy7 = progress->get_max();
HXDLIN(  55)				cy = (((Float)cy6 / (Float)(cy7 - progress->get_min())) * ucy);
            			}
HXLINE(  58)			if ((cy < (int)0)) {
HXLINE(  59)				cy = (int)0;
            			}
            			else {
HXLINE(  60)				if ((cy > ucy)) {
HXLINE(  61)					cy = ucy;
            				}
            			}
HXLINE(  64)			if ((cy == (int)0)) {
HXLINE(  65)				value->set_componentHeight((int)0);
HXLINE(  66)				value->set_hidden(true);
            			}
            			else {
HXLINE(  68)				value->set_componentHeight(cy);
HXLINE(  69)				value->set_hidden(false);
            			}
            		}
            	}


void VProgressLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_91cb3b7bd3e1f48d_74_repositionChildren)
HXLINE(  75)		this->super::repositionChildren();
HXLINE(  77)		 ::haxe::ui::core::Component value = this->get_component()->findComponent(HX_("progress-value",91,33,07,01),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  78)		 ::haxe::ui::components::Progress progress = ( ( ::haxe::ui::components::Progress)(this->get_component()) );
HXLINE(  79)		if (hx::IsNotNull( value )) {
HXLINE(  80)			Float ucy = this->get_usableHeight();
HXLINE(  81)			Float y = (ucy - value->get_componentHeight());
HXDLIN(  81)			Float y1 = (y + this->get_paddingBottom());
HXLINE(  82)			if ((progress->get_indeterminate() == true)) {
HXLINE(  83)				Float y2 = progress->get_rangeStart();
HXDLIN(  83)				Float y3 = (y2 - progress->get_min());
HXDLIN(  83)				Float y4 = progress->get_max();
HXDLIN(  83)				y1 = (y1 - (((Float)y3 / (Float)(y4 - progress->get_min())) * ucy));
            			}
HXLINE(  85)			value->set_top(y1);
            		}
            	}



hx::ObjectPtr< VProgressLayout_obj > VProgressLayout_obj::__new() {
	hx::ObjectPtr< VProgressLayout_obj > __this = new VProgressLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VProgressLayout_obj > VProgressLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	VProgressLayout_obj *__this = (VProgressLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VProgressLayout_obj), true, "haxe.ui.components.VProgressLayout"));
	*(void **)__this = VProgressLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VProgressLayout_obj::VProgressLayout_obj()
{
}

hx::Val VProgressLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return hx::Val( resizeChildren_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *VProgressLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *VProgressLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String VProgressLayout_obj_sMemberFields[] = {
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	::String(null()) };

static void VProgressLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VProgressLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VProgressLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VProgressLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class VProgressLayout_obj::__mClass;

void VProgressLayout_obj::__register()
{
	hx::Object *dummy = new VProgressLayout_obj;
	VProgressLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.VProgressLayout","\x67","\x3f","\xa4","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VProgressLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VProgressLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VProgressLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VProgressLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VProgressLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VProgressLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
