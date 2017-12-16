// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HScroll
#include <haxe/ui/components/HScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VScroll
#include <haxe/ui/components/VScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewLayout
#include <haxe/ui/containers/ScrollViewLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_Platform
#include <haxe/ui/core/Platform.h>
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
#ifndef INCLUDED_haxe_ui_util_Size
#include <haxe/ui/util/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_82989437e4689eb3_602_new,"haxe.ui.containers.ScrollViewLayout","new",0x18c4b778,"haxe.ui.containers.ScrollViewLayout.new","haxe/ui/containers/ScrollView.hx",602,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_82989437e4689eb3_605_repositionChildren,"haxe.ui.containers.ScrollViewLayout","repositionChildren",0xa3f5d4a3,"haxe.ui.containers.ScrollViewLayout.repositionChildren","haxe/ui/containers/ScrollView.hx",605,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_82989437e4689eb3_633_get_usableSize,"haxe.ui.containers.ScrollViewLayout","get_usableSize",0x02624c0a,"haxe.ui.containers.ScrollViewLayout.get_usableSize","haxe/ui/containers/ScrollView.hx",633,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_82989437e4689eb3_658_calcAutoSize,"haxe.ui.containers.ScrollViewLayout","calcAutoSize",0x8ff4f76d,"haxe.ui.containers.ScrollViewLayout.calcAutoSize","haxe/ui/containers/ScrollView.hx",658,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{

void ScrollViewLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_82989437e4689eb3_602_new)
HXDLIN( 602)		super::__construct();
            	}

Dynamic ScrollViewLayout_obj::__CreateEmpty() { return new ScrollViewLayout_obj; }

void *ScrollViewLayout_obj::_hx_vtable = 0;

Dynamic ScrollViewLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ScrollViewLayout_obj > _hx_result = new ScrollViewLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScrollViewLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x652c3c60) {
		if (inClassId<=(int)0x548a03f5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x548a03f5;
		} else {
			return inClassId==(int)0x652c3c60;
		}
	} else {
		return inClassId==(int)0x7bce30ac;
	}
}

void ScrollViewLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_82989437e4689eb3_605_repositionChildren)
HXLINE( 606)		 ::haxe::ui::core::Component contents = this->get_component()->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 607)		if (hx::IsNull( contents )) {
HXLINE( 608)			return;
            		}
HXLINE( 611)		 ::haxe::ui::core::Component hscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::HScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HScroll >();
HXLINE( 612)		 ::haxe::ui::core::Component vscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VScroll >();
HXLINE( 614)		Float ucx = this->get_innerWidth();
HXLINE( 615)		Float ucy = this->get_innerHeight();
HXLINE( 617)		bool _hx_tmp;
HXDLIN( 617)		if (hx::IsNotNull( hscroll )) {
HXLINE( 617)			_hx_tmp = (this->hidden(hscroll) == false);
            		}
            		else {
HXLINE( 617)			_hx_tmp = false;
            		}
HXDLIN( 617)		if (_hx_tmp) {
HXLINE( 618)			Float ucy1 = this->get_innerHeight();
HXLINE( 619)			Float _hx_tmp1 = this->get_paddingLeft();
HXDLIN( 619)			Float _hx_tmp2 = (ucy1 - hscroll->get_componentHeight());
HXDLIN( 619)			hscroll->moveComponent(_hx_tmp1,(_hx_tmp2 + this->get_paddingBottom()));
            		}
HXLINE( 622)		bool _hx_tmp3;
HXDLIN( 622)		if (hx::IsNotNull( vscroll )) {
HXLINE( 622)			_hx_tmp3 = (this->hidden(vscroll) == false);
            		}
            		else {
HXLINE( 622)			_hx_tmp3 = false;
            		}
HXDLIN( 622)		if (_hx_tmp3) {
HXLINE( 623)			Float ucx1 = this->get_innerWidth();
HXLINE( 624)			Float _hx_tmp4 = (ucx1 - vscroll->get_componentWidth());
HXDLIN( 624)			Float _hx_tmp5 = (_hx_tmp4 + this->get_paddingRight());
HXDLIN( 624)			vscroll->moveComponent(_hx_tmp5,this->get_paddingTop());
            		}
HXLINE( 627)		 ::haxe::ui::core::Component contents1 = this->get_component()->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 628)		if (hx::IsNotNull( contents1 )) {
HXLINE( 629)			Float _hx_tmp6 = this->get_paddingLeft();
HXDLIN( 629)			contents1->moveComponent(_hx_tmp6,this->get_paddingTop());
            		}
            	}


 ::haxe::ui::util::Size ScrollViewLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_82989437e4689eb3_633_get_usableSize)
HXLINE( 634)		 ::haxe::ui::util::Size size = this->super::get_usableSize();
HXLINE( 635)		 ::haxe::ui::core::Component hscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::HScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HScroll >();
HXLINE( 636)		 ::haxe::ui::core::Component vscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VScroll >();
HXLINE( 637)		bool _hx_tmp;
HXDLIN( 637)		if (hx::IsNotNull( hscroll )) {
HXLINE( 637)			_hx_tmp = (this->hidden(hscroll) == false);
            		}
            		else {
HXLINE( 637)			_hx_tmp = false;
            		}
HXDLIN( 637)		if (_hx_tmp) {
HXLINE( 638)			 ::haxe::ui::util::Size size1 = size;
HXDLIN( 638)			Float size2 = size1->height;
HXDLIN( 638)			size1->height = (size2 - hscroll->get_componentHeight());
            		}
HXLINE( 640)		bool _hx_tmp1;
HXDLIN( 640)		if (hx::IsNotNull( vscroll )) {
HXLINE( 640)			_hx_tmp1 = (this->hidden(vscroll) == false);
            		}
            		else {
HXLINE( 640)			_hx_tmp1 = false;
            		}
HXDLIN( 640)		if (_hx_tmp1) {
HXLINE( 641)			 ::haxe::ui::util::Size size3 = size;
HXDLIN( 641)			Float size4 = size3->width;
HXDLIN( 641)			size3->width = (size4 - vscroll->get_componentWidth());
            		}
HXLINE( 644)		if (hx::IsEq( this->get_component()->get_native(),true )) {
HXLINE( 645)			 ::haxe::ui::core::Component contents = this->get_component()->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 646)			bool _hx_tmp2;
HXDLIN( 646)			if (hx::IsNotNull( contents )) {
HXLINE( 646)				 ::Dynamic _hx_tmp3 = contents->get_componentHeight();
HXDLIN( 646)				_hx_tmp2 = hx::IsGreater( _hx_tmp3,size->height );
            			}
            			else {
HXLINE( 646)				_hx_tmp2 = false;
            			}
HXDLIN( 646)			if (_hx_tmp2) {
HXLINE( 647)				 ::haxe::ui::util::Size size5 = size;
HXDLIN( 647)				Float size6 = size5->width;
HXDLIN( 647)				size5->width = (size6 - ::haxe::ui::core::Platform_obj::get_vscrollWidth());
            			}
HXLINE( 649)			 ::haxe::ui::core::Component contents1 = this->get_component()->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 650)			bool _hx_tmp4;
HXDLIN( 650)			if (hx::IsNotNull( contents1 )) {
HXLINE( 650)				 ::Dynamic _hx_tmp5 = contents1->get_componentWidth();
HXDLIN( 650)				_hx_tmp4 = hx::IsGreater( _hx_tmp5,size->width );
            			}
            			else {
HXLINE( 650)				_hx_tmp4 = false;
            			}
HXDLIN( 650)			if (_hx_tmp4) {
HXLINE( 651)				 ::haxe::ui::util::Size size7 = size;
HXDLIN( 651)				Float size8 = size7->height;
HXDLIN( 651)				size7->height = (size8 - ::haxe::ui::core::Platform_obj::get_hscrollHeight());
            			}
            		}
HXLINE( 655)		return size;
            	}


 ::haxe::ui::util::Size ScrollViewLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_82989437e4689eb3_658_calcAutoSize)
HXLINE( 659)		 ::haxe::ui::core::Component hscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::HScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HScroll >();
HXLINE( 660)		 ::haxe::ui::core::Component vscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VScroll >();
HXLINE( 661)		 ::haxe::ui::util::Size size = this->super::calcAutoSize(::Array_obj< ::Dynamic>::__new(2)->init(0,hscroll)->init(1,vscroll));
HXLINE( 662)		bool _hx_tmp;
HXDLIN( 662)		if (hx::IsNotNull( hscroll )) {
HXLINE( 662)			_hx_tmp = (hscroll->get_hidden() == false);
            		}
            		else {
HXLINE( 662)			_hx_tmp = false;
            		}
HXDLIN( 662)		if (_hx_tmp) {
HXLINE( 663)			 ::haxe::ui::util::Size size1 = size;
HXDLIN( 663)			Float size2 = size1->height;
HXDLIN( 663)			size1->height = (size2 + hscroll->get_componentHeight());
            		}
HXLINE( 665)		bool _hx_tmp1;
HXDLIN( 665)		if (hx::IsNotNull( vscroll )) {
HXLINE( 665)			_hx_tmp1 = (vscroll->get_hidden() == false);
            		}
            		else {
HXLINE( 665)			_hx_tmp1 = false;
            		}
HXDLIN( 665)		if (_hx_tmp1) {
HXLINE( 666)			 ::haxe::ui::util::Size size3 = size;
HXDLIN( 666)			Float size4 = size3->width;
HXDLIN( 666)			size3->width = (size4 + vscroll->get_componentWidth());
            		}
HXLINE( 668)		return size;
            	}



hx::ObjectPtr< ScrollViewLayout_obj > ScrollViewLayout_obj::__new() {
	hx::ObjectPtr< ScrollViewLayout_obj > __this = new ScrollViewLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ScrollViewLayout_obj > ScrollViewLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	ScrollViewLayout_obj *__this = (ScrollViewLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ScrollViewLayout_obj), true, "haxe.ui.containers.ScrollViewLayout"));
	*(void **)__this = ScrollViewLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScrollViewLayout_obj::ScrollViewLayout_obj()
{
}

hx::Val ScrollViewLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return hx::Val( get_usableSize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ScrollViewLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ScrollViewLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollViewLayout_obj_sMemberFields[] = {
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("get_usableSize","\x22","\x8c","\xf5","\x3e"),
	HX_HCSTRING("calcAutoSize","\x85","\x81","\x3f","\xfd"),
	::String(null()) };

static void ScrollViewLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollViewLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScrollViewLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollViewLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class ScrollViewLayout_obj::__mClass;

void ScrollViewLayout_obj::__register()
{
	hx::Object *dummy = new ScrollViewLayout_obj;
	ScrollViewLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.ScrollViewLayout","\x86","\xdb","\xcd","\x26");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ScrollViewLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ScrollViewLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScrollViewLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScrollViewLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollViewLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollViewLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
