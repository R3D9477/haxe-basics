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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Header
#include <haxe/ui/containers/Header.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TableView
#include <haxe/ui/containers/TableView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TableViewLayout
#include <haxe/ui/containers/TableViewLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3497be1f14845b4e_327_new,"haxe.ui.containers.TableViewLayout","new",0x983bd425,"haxe.ui.containers.TableViewLayout.new","haxe/ui/containers/TableView.hx",327,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3497be1f14845b4e_330_resizeChildren,"haxe.ui.containers.TableViewLayout","resizeChildren",0xb8e07bae,"haxe.ui.containers.TableViewLayout.resizeChildren","haxe/ui/containers/TableView.hx",330,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3497be1f14845b4e_344_repositionChildren,"haxe.ui.containers.TableViewLayout","repositionChildren",0x026a0296,"haxe.ui.containers.TableViewLayout.repositionChildren","haxe/ui/containers/TableView.hx",344,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3497be1f14845b4e_378_get_usableSize,"haxe.ui.containers.TableViewLayout","get_usableSize",0x36a5c47d,"haxe.ui.containers.TableViewLayout.get_usableSize","haxe/ui/containers/TableView.hx",378,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_3497be1f14845b4e_409_calcAutoSize,"haxe.ui.containers.TableViewLayout","calcAutoSize",0x010d5d20,"haxe.ui.containers.TableViewLayout.calcAutoSize","haxe/ui/containers/TableView.hx",409,0x8a42a716)
namespace haxe{
namespace ui{
namespace containers{

void TableViewLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3497be1f14845b4e_327_new)
HXDLIN( 327)		super::__construct();
            	}

Dynamic TableViewLayout_obj::__CreateEmpty() { return new TableViewLayout_obj; }

void *TableViewLayout_obj::_hx_vtable = 0;

Dynamic TableViewLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TableViewLayout_obj > _hx_result = new TableViewLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TableViewLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x0c58ea31) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c58ea31;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void TableViewLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_3497be1f14845b4e_330_resizeChildren)
HXLINE( 331)		this->super::resizeChildren();
HXLINE( 332)		 ::haxe::ui::core::Component vscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VScroll >(),null(),null()).StaticCast<  ::haxe::ui::components::VScroll >();
HXLINE( 333)		 ::haxe::ui::containers::Header header = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::containers::Header >(),null(),null()).StaticCast<  ::haxe::ui::containers::Header >();
HXLINE( 334)		if (hx::IsNotNull( vscroll )) {
HXLINE( 335)			Float offsetY = (int)0;
HXLINE( 336)			if (hx::IsNotNull( header )) {
HXLINE( 337)				offsetY = (offsetY + header->get_componentHeight());
            			}
HXLINE( 340)			vscroll->set_componentHeight((this->get_usableHeight() + offsetY));
            		}
            	}


void TableViewLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_3497be1f14845b4e_344_repositionChildren)
HXLINE( 345)		 ::haxe::ui::containers::Header header = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::containers::Header >(),null(),null()).StaticCast<  ::haxe::ui::containers::Header >();
HXLINE( 346)		if (hx::IsNotNull( header )) {
HXLINE( 347)			Float _hx_tmp = this->get_paddingLeft();
HXDLIN( 347)			Float _hx_tmp1 = (_hx_tmp + this->marginLeft(header));
HXDLIN( 347)			header->set_left((_hx_tmp1 - this->marginRight(header)));
HXLINE( 348)			Float _hx_tmp2 = this->get_paddingTop();
HXDLIN( 348)			Float _hx_tmp3 = (_hx_tmp2 + this->marginTop(header));
HXDLIN( 348)			header->set_top((_hx_tmp3 - this->marginBottom(header)));
            		}
HXLINE( 351)		 ::haxe::ui::core::Component hscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::HScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HScroll >();
HXLINE( 352)		 ::haxe::ui::core::Component vscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VScroll >();
HXLINE( 354)		Float ucx = this->get_innerWidth();
HXLINE( 355)		Float ucy = this->get_innerHeight();
HXLINE( 357)		bool _hx_tmp4;
HXDLIN( 357)		if (hx::IsNotNull( hscroll )) {
HXLINE( 357)			_hx_tmp4 = (this->hidden(hscroll) == false);
            		}
            		else {
HXLINE( 357)			_hx_tmp4 = false;
            		}
HXDLIN( 357)		if (_hx_tmp4) {
HXLINE( 358)			hscroll->set_left(this->get_paddingLeft());
HXLINE( 359)			Float _hx_tmp5 = (ucy - hscroll->get_componentHeight());
HXDLIN( 359)			hscroll->set_top((_hx_tmp5 + this->get_paddingBottom()));
            		}
HXLINE( 362)		bool _hx_tmp6;
HXDLIN( 362)		if (hx::IsNotNull( vscroll )) {
HXLINE( 362)			_hx_tmp6 = (this->hidden(vscroll) == false);
            		}
            		else {
HXLINE( 362)			_hx_tmp6 = false;
            		}
HXDLIN( 362)		if (_hx_tmp6) {
HXLINE( 363)			Float _hx_tmp7 = (ucx - vscroll->get_componentWidth());
HXDLIN( 363)			vscroll->set_left((_hx_tmp7 + this->get_paddingRight()));
HXLINE( 364)			vscroll->set_top(this->get_paddingTop());
            		}
HXLINE( 367)		 ::haxe::ui::core::Component contents = this->get_component()->findComponent(HX_("tableview-contents",74,2a,d3,78),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 368)		if (hx::IsNotNull( contents )) {
HXLINE( 369)			Float offsetY = (int)0;
HXLINE( 370)			if (hx::IsNotNull( header )) {
HXLINE( 371)				offsetY = (offsetY + header->get_componentHeight());
            			}
HXLINE( 373)			Float _hx_tmp8 = this->get_paddingLeft();
HXDLIN( 373)			Float _hx_tmp9 = (_hx_tmp8 + this->marginLeft(contents));
HXDLIN( 373)			contents->set_left((_hx_tmp9 - this->marginRight(contents)));
HXLINE( 374)			Float _hx_tmp10 = this->get_paddingTop();
HXDLIN( 374)			Float _hx_tmp11 = (_hx_tmp10 + this->marginTop(contents));
HXDLIN( 374)			contents->set_top(((_hx_tmp11 - this->marginBottom(contents)) + offsetY));
            		}
            	}


 ::haxe::ui::util::Size TableViewLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_3497be1f14845b4e_378_get_usableSize)
HXLINE( 379)		 ::haxe::ui::util::Size size = this->super::get_usableSize();
HXLINE( 380)		 ::haxe::ui::core::Component hscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::HScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HScroll >();
HXLINE( 381)		 ::haxe::ui::core::Component vscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VScroll >();
HXLINE( 382)		bool _hx_tmp;
HXDLIN( 382)		if (hx::IsNotNull( hscroll )) {
HXLINE( 382)			_hx_tmp = (this->hidden(hscroll) == false);
            		}
            		else {
HXLINE( 382)			_hx_tmp = false;
            		}
HXDLIN( 382)		if (_hx_tmp) {
HXLINE( 383)			 ::haxe::ui::util::Size size1 = size;
HXDLIN( 383)			Float size2 = size1->height;
HXDLIN( 383)			size1->height = (size2 - hscroll->get_componentHeight());
            		}
HXLINE( 385)		bool _hx_tmp1;
HXDLIN( 385)		if (hx::IsNotNull( vscroll )) {
HXLINE( 385)			_hx_tmp1 = (this->hidden(vscroll) == false);
            		}
            		else {
HXLINE( 385)			_hx_tmp1 = false;
            		}
HXDLIN( 385)		if (_hx_tmp1) {
HXLINE( 386)			 ::haxe::ui::util::Size size3 = size;
HXDLIN( 386)			Float size4 = size3->width;
HXDLIN( 386)			size3->width = (size4 - vscroll->get_componentWidth());
            		}
HXLINE( 389)		 ::haxe::ui::containers::Header header = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::containers::Header >(),null(),null()).StaticCast<  ::haxe::ui::containers::Header >();
HXLINE( 390)		if (hx::IsNotNull( header )) {
HXLINE( 391)			 ::haxe::ui::util::Size size5 = size;
HXDLIN( 391)			Float size6 = size5->height;
HXDLIN( 391)			size5->height = (size6 - header->get_componentHeight());
            		}
HXLINE( 393)		 ::haxe::ui::util::Size size7 = size;
HXDLIN( 393)		size7->height = (size7->height + (int)1);
HXLINE( 394)		 ::haxe::ui::util::Size size8 = size;
HXDLIN( 394)		size8->width = (size8->width + (int)1);
HXLINE( 395)		if (hx::IsEq( this->get_component()->get_native(),true )) {
HXLINE( 396)			 ::haxe::ui::core::Component contents = this->get_component()->findComponent(HX_("tableview-contents",74,2a,d3,78),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 397)			bool _hx_tmp2;
HXDLIN( 397)			if (hx::IsNotNull( contents )) {
HXLINE( 397)				 ::Dynamic _hx_tmp3 = contents->get_componentHeight();
HXDLIN( 397)				_hx_tmp2 = hx::IsGreater( _hx_tmp3,size->height );
            			}
            			else {
HXLINE( 397)				_hx_tmp2 = false;
            			}
HXDLIN( 397)			if (_hx_tmp2) {
HXLINE( 398)				 ::haxe::ui::util::Size size9 = size;
HXDLIN( 398)				Float size10 = size9->width;
HXDLIN( 398)				size9->width = (size10 - ::haxe::ui::core::Platform_obj::get_vscrollWidth());
            			}
HXLINE( 401)			bool _hx_tmp4;
HXDLIN( 401)			if (hx::IsNotNull( contents )) {
HXLINE( 401)				 ::Dynamic _hx_tmp5 = contents->get_componentWidth();
HXDLIN( 401)				_hx_tmp4 = hx::IsGreater( _hx_tmp5,size->width );
            			}
            			else {
HXLINE( 401)				_hx_tmp4 = false;
            			}
HXDLIN( 401)			if (_hx_tmp4) {
HXLINE( 402)				 ::haxe::ui::util::Size size11 = size;
HXDLIN( 402)				Float size12 = size11->height;
HXDLIN( 402)				size11->height = (size12 - ::haxe::ui::core::Platform_obj::get_hscrollHeight());
            			}
            		}
HXLINE( 406)		return size;
            	}


 ::haxe::ui::util::Size TableViewLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_3497be1f14845b4e_409_calcAutoSize)
HXLINE( 410)		 ::haxe::ui::util::Size size = this->super::calcAutoSize(exclusions);
HXLINE( 411)		 ::haxe::ui::core::Component hscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::HScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HScroll >();
HXLINE( 412)		 ::haxe::ui::core::Component vscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VScroll >();
HXLINE( 413)		bool _hx_tmp;
HXDLIN( 413)		if (hx::IsNotNull( hscroll )) {
HXLINE( 413)			_hx_tmp = (hscroll->get_hidden() == false);
            		}
            		else {
HXLINE( 413)			_hx_tmp = false;
            		}
HXDLIN( 413)		if (_hx_tmp) {
HXLINE( 414)			 ::haxe::ui::util::Size size1 = size;
HXDLIN( 414)			Float size2 = size1->height;
HXDLIN( 414)			size1->height = (size2 + hscroll->get_componentHeight());
            		}
HXLINE( 416)		bool _hx_tmp1;
HXDLIN( 416)		if (hx::IsNotNull( vscroll )) {
HXLINE( 416)			_hx_tmp1 = (vscroll->get_hidden() == false);
            		}
            		else {
HXLINE( 416)			_hx_tmp1 = false;
            		}
HXDLIN( 416)		if (_hx_tmp1) {
HXLINE( 417)			 ::haxe::ui::util::Size size3 = size;
HXDLIN( 417)			Float size4 = size3->width;
HXDLIN( 417)			size3->width = (size4 + vscroll->get_componentWidth());
            		}
HXLINE( 419)		return size;
            	}



hx::ObjectPtr< TableViewLayout_obj > TableViewLayout_obj::__new() {
	hx::ObjectPtr< TableViewLayout_obj > __this = new TableViewLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TableViewLayout_obj > TableViewLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	TableViewLayout_obj *__this = (TableViewLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TableViewLayout_obj), true, "haxe.ui.containers.TableViewLayout"));
	*(void **)__this = TableViewLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TableViewLayout_obj::TableViewLayout_obj()
{
}

hx::Val TableViewLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return hx::Val( get_usableSize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TableViewLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TableViewLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String TableViewLayout_obj_sMemberFields[] = {
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("get_usableSize","\x22","\x8c","\xf5","\x3e"),
	HX_HCSTRING("calcAutoSize","\x85","\x81","\x3f","\xfd"),
	::String(null()) };

static void TableViewLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TableViewLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TableViewLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TableViewLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class TableViewLayout_obj::__mClass;

void TableViewLayout_obj::__register()
{
	hx::Object *dummy = new TableViewLayout_obj;
	TableViewLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.TableViewLayout","\xb3","\xdd","\x13","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TableViewLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TableViewLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TableViewLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TableViewLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TableViewLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TableViewLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
