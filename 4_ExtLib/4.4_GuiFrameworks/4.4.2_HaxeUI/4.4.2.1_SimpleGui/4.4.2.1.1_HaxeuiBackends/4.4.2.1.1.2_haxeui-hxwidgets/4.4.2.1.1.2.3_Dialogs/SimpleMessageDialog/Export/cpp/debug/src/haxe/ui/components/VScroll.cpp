// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VScroll
#include <haxe/ui/components/VScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VScrollLayout
#include <haxe/ui/components/VScrollLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_MouseEvent
#include <haxe/ui/core/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9297a9d203ae4160_12_new,"haxe.ui.components.VScroll","new",0x145350af,"haxe.ui.components.VScroll.new","haxe/ui/components/VScroll.hx",12,0x068b8a42)
HX_LOCAL_STACK_FRAME(_hx_pos_9297a9d203ae4160_19_createDefaults,"haxe.ui.components.VScroll","createDefaults",0x0117a3bf,"haxe.ui.components.VScroll.createDefaults","haxe/ui/components/VScroll.hx",19,0x068b8a42)
HX_LOCAL_STACK_FRAME(_hx_pos_9297a9d203ae4160_27__onThumbMouseDown,"haxe.ui.components.VScroll","_onThumbMouseDown",0x879bc49e,"haxe.ui.components.VScroll._onThumbMouseDown","haxe/ui/components/VScroll.hx",27,0x068b8a42)
HX_LOCAL_STACK_FRAME(_hx_pos_9297a9d203ae4160_33__onScreenMouseMove,"haxe.ui.components.VScroll","_onScreenMouseMove",0xa5ef09bd,"haxe.ui.components.VScroll._onScreenMouseMove","haxe/ui/components/VScroll.hx",33,0x068b8a42)
HX_LOCAL_STACK_FRAME(_hx_pos_9297a9d203ae4160_65__onMouseDown,"haxe.ui.components.VScroll","_onMouseDown",0xfe1abfda,"haxe.ui.components.VScroll._onMouseDown","haxe/ui/components/VScroll.hx",65,0x068b8a42)
HX_LOCAL_STACK_FRAME(_hx_pos_198917fa49ce1620_1_cloneComponent,"haxe.ui.components.VScroll","cloneComponent",0x259a3db1,"haxe.ui.components.VScroll.cloneComponent","src/haxe/ui/components/VScroll.hx",1,0xc5d30097)
HX_LOCAL_STACK_FRAME(_hx_pos_198917fa49ce1620_2_self,"haxe.ui.components.VScroll","self",0xb7e1505d,"haxe.ui.components.VScroll.self","src/haxe/ui/components/VScroll.hx",2,0xc5d30097)
namespace haxe{
namespace ui{
namespace components{

void VScroll_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9297a9d203ae4160_12_new)
HXDLIN(  12)		super::__construct();
            	}

Dynamic VScroll_obj::__CreateEmpty() { return new VScroll_obj; }

void *VScroll_obj::_hx_vtable = 0;

Dynamic VScroll_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VScroll_obj > _hx_result = new VScroll_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VScroll_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x419aedfd) {
			if (inClassId<=(int)0x1d4149a3) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1d4149a3;
			} else {
				return inClassId==(int)0x419aedfd;
			}
		} else {
			return inClassId==(int)0x4a06d0bc;
		}
	} else {
		return inClassId==(int)0x5f23eff4 || inClassId==(int)0x7140e8dc;
	}
}

void VScroll_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_9297a9d203ae4160_19_createDefaults)
HXLINE(  20)		this->super::createDefaults();
HXLINE(  21)		this->_defaultLayout =  ::haxe::ui::components::VScrollLayout_obj::__alloc( HX_CTX );
            	}


void VScroll_obj::_onThumbMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_9297a9d203ae4160_27__onThumbMouseDown)
HXLINE(  28)		this->super::_onThumbMouseDown(event);
HXLINE(  30)		Float event1 = event->screenY;
HXDLIN(  30)		Float _hx_tmp = (event1 - this->_thumb->get_top());
HXDLIN(  30)		this->_mouseDownOffset = (_hx_tmp + this->get_layout()->get_paddingTop());
            	}


void VScroll_obj::_onScreenMouseMove( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_9297a9d203ae4160_33__onScreenMouseMove)
HXLINE(  34)		this->super::_onScreenMouseMove(event);
HXLINE(  35)		if ((this->_mouseDownOffset == (int)-1)) {
HXLINE(  36)			return;
            		}
HXLINE(  39)		Float ypos = (event->screenY - this->_mouseDownOffset);
HXLINE(  40)		Float minY = (int)0;
HXLINE(  41)		bool _hx_tmp;
HXDLIN(  41)		if (hx::IsNotNull( this->_deincButton )) {
HXLINE(  41)			_hx_tmp = (this->_deincButton->get_hidden() == false);
            		}
            		else {
HXLINE(  41)			_hx_tmp = false;
            		}
HXDLIN(  41)		if (_hx_tmp) {
HXLINE(  42)			 ::Dynamic minY1 = this->_deincButton->get_componentHeight();
HXDLIN(  42)			minY = (minY1 + this->get_layout()->get_verticalSpacing());
            		}
HXLINE(  45)		Float maxY = this->get_layout()->get_usableHeight();
HXDLIN(  45)		Float maxY1 = (maxY - this->_thumb->get_componentHeight());
HXLINE(  46)		bool _hx_tmp1;
HXDLIN(  46)		if (hx::IsNotNull( this->_deincButton )) {
HXLINE(  46)			_hx_tmp1 = (this->_deincButton->get_hidden() == false);
            		}
            		else {
HXLINE(  46)			_hx_tmp1 = false;
            		}
HXDLIN(  46)		if (_hx_tmp1) {
HXLINE(  47)			 ::Dynamic maxY2 = this->_deincButton->get_componentHeight();
HXDLIN(  47)			maxY1 = (maxY1 + (maxY2 + this->get_layout()->get_verticalSpacing()));
            		}
HXLINE(  50)		if ((ypos < minY)) {
HXLINE(  51)			ypos = minY;
            		}
            		else {
HXLINE(  52)			if ((ypos > maxY1)) {
HXLINE(  53)				ypos = maxY1;
            			}
            		}
HXLINE(  56)		Float ucy = this->get_layout()->get_usableHeight();
HXLINE(  57)		ucy = (ucy - this->_thumb->get_componentHeight());
HXLINE(  58)		Float m = this->get_max();
HXDLIN(  58)		int m1 = ::Std_obj::_hx_int((m - this->get_min()));
HXLINE(  59)		Float v = (ypos - minY);
HXLINE(  60)		Float newValue = this->get_min();
HXDLIN(  60)		Float newValue1 = (newValue + (((Float)v / (Float)ucy) * m1));
HXLINE(  61)		this->set_pos(newValue1);
            	}


void VScroll_obj::_onMouseDown( ::haxe::ui::core::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_9297a9d203ae4160_65__onMouseDown)
HXDLIN(  65)		Float event1 = event->screenY;
HXDLIN(  65)		if ((event1 < this->_thumb->get_screenTop())) {
HXLINE(  66)			Float _hx_tmp = this->get_pos();
HXDLIN(  66)			this->animatePos((_hx_tmp - this->get_pageSize()));
            		}
            		else {
HXLINE(  67)			Float event2 = event->screenY;
HXDLIN(  67)			Float _hx_tmp1 = this->_thumb->get_screenTop();
HXDLIN(  67)			if ((event2 > (_hx_tmp1 + this->_thumb->get_componentHeight()))) {
HXLINE(  68)				Float _hx_tmp2 = this->get_pos();
HXDLIN(  68)				this->animatePos((_hx_tmp2 + this->get_pageSize()));
            			}
            		}
            	}


 ::haxe::ui::core::Component VScroll_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_198917fa49ce1620_1_cloneComponent)
HXLINE(   2)		 ::haxe::ui::components::VScroll c = ( ( ::haxe::ui::components::VScroll)(this->super::cloneComponent()) );
HXLINE(   3)		return c;
            	}


 ::haxe::ui::core::Component VScroll_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_198917fa49ce1620_2_self)
HXDLIN(   2)		return  ::haxe::ui::components::VScroll_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< VScroll_obj > VScroll_obj::__new() {
	hx::ObjectPtr< VScroll_obj > __this = new VScroll_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VScroll_obj > VScroll_obj::__alloc(hx::Ctx *_hx_ctx) {
	VScroll_obj *__this = (VScroll_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VScroll_obj), true, "haxe.ui.components.VScroll"));
	*(void **)__this = VScroll_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VScroll_obj::VScroll_obj()
{
}

hx::Val VScroll_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return hx::Val( _onMouseDown_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onThumbMouseDown") ) { return hx::Val( _onThumbMouseDown_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_onScreenMouseMove") ) { return hx::Val( _onScreenMouseMove_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *VScroll_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *VScroll_obj_sStaticStorageInfo = 0;
#endif

static ::String VScroll_obj_sMemberFields[] = {
	HX_HCSTRING("createDefaults","\xae","\x4f","\xd4","\x01"),
	HX_HCSTRING("_onThumbMouseDown","\x0f","\xf8","\xd5","\x49"),
	HX_HCSTRING("_onScreenMouseMove","\x2c","\xd9","\xa1","\xd6"),
	HX_HCSTRING("_onMouseDown","\x09","\x42","\x0f","\x77"),
	HX_HCSTRING("cloneComponent","\xa0","\xe9","\x56","\x26"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void VScroll_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VScroll_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VScroll_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VScroll_obj::__mClass,"__mClass");
};

#endif

hx::Class VScroll_obj::__mClass;

void VScroll_obj::__register()
{
	hx::Object *dummy = new VScroll_obj;
	VScroll_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.VScroll","\x3d","\xcd","\xbb","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VScroll_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VScroll_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VScroll_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VScroll_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VScroll_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VScroll_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
