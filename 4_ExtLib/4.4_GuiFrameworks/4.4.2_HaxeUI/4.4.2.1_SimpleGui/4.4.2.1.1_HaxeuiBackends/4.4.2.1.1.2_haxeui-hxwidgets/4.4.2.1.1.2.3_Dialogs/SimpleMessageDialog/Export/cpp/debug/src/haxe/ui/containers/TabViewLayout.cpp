// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TabViewLayout
#include <haxe/ui/containers/TabViewLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ef0872c6a48e7ccf_222_new,"haxe.ui.containers.TabViewLayout","new",0x6f31f32c,"haxe.ui.containers.TabViewLayout.new","haxe/ui/containers/TabView.hx",222,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_ef0872c6a48e7ccf_223_repositionChildren,"haxe.ui.containers.TabViewLayout","repositionChildren",0xb77fe36f,"haxe.ui.containers.TabViewLayout.repositionChildren","haxe/ui/containers/TabView.hx",223,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_ef0872c6a48e7ccf_239_resizeChildren,"haxe.ui.containers.TabViewLayout","resizeChildren",0xf42cbc07,"haxe.ui.containers.TabViewLayout.resizeChildren","haxe/ui/containers/TabView.hx",239,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_ef0872c6a48e7ccf_259_get_usableSize,"haxe.ui.containers.TabViewLayout","get_usableSize",0x71f204d6,"haxe.ui.containers.TabViewLayout.get_usableSize","haxe/ui/containers/TabView.hx",259,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_ef0872c6a48e7ccf_268_calcAutoSize,"haxe.ui.containers.TabViewLayout","calcAutoSize",0xe1e4a539,"haxe.ui.containers.TabViewLayout.calcAutoSize","haxe/ui/containers/TabView.hx",268,0xfd8842ef)
namespace haxe{
namespace ui{
namespace containers{

void TabViewLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ef0872c6a48e7ccf_222_new)
HXDLIN( 222)		super::__construct();
            	}

Dynamic TabViewLayout_obj::__CreateEmpty() { return new TabViewLayout_obj; }

void *TabViewLayout_obj::_hx_vtable = 0;

Dynamic TabViewLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TabViewLayout_obj > _hx_result = new TabViewLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabViewLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x1de5c454) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1de5c454;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void TabViewLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_ef0872c6a48e7ccf_223_repositionChildren)
HXLINE( 224)		 ::haxe::ui::components::TabBar tabs = this->get_component()->findComponent(HX_("tabview-tabs",b1,fd,eb,1e),null(),null(),null()).StaticCast<  ::haxe::ui::components::TabBar >();
HXLINE( 225)		 ::haxe::ui::core::Component content = this->get_component()->findComponent(HX_("tabview-content",e6,41,c6,35),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 226)		bool _hx_tmp;
HXDLIN( 226)		if (hx::IsNotNull( tabs )) {
HXLINE( 226)			_hx_tmp = hx::IsNull( content );
            		}
            		else {
HXLINE( 226)			_hx_tmp = true;
            		}
HXDLIN( 226)		if (_hx_tmp) {
HXLINE( 227)			return;
            		}
HXLINE( 230)		tabs->set_left(this->get_paddingLeft());
HXLINE( 231)		tabs->set_top(this->get_paddingTop());
HXLINE( 233)		content->set_left(this->get_paddingLeft());
HXLINE( 234)		if (hx::IsNotNull( tabs->get_componentHeight() )) {
HXLINE( 235)			 ::Dynamic _hx_tmp1 = tabs->get_top();
HXDLIN( 235)			content->set_top(((_hx_tmp1 + tabs->get_componentHeight()) - (int)1));
            		}
            	}


void TabViewLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_ef0872c6a48e7ccf_239_resizeChildren)
HXLINE( 240)		 ::haxe::ui::core::Component content = this->get_component()->findComponent(HX_("tabview-content",e6,41,c6,35),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 241)		 ::haxe::ui::components::TabBar tabs = this->get_component()->findComponent(HX_("tabview-tabs",b1,fd,eb,1e),null(),null(),null()).StaticCast<  ::haxe::ui::components::TabBar >();
HXLINE( 242)		bool _hx_tmp;
HXDLIN( 242)		if (hx::IsNotNull( tabs )) {
HXLINE( 242)			_hx_tmp = hx::IsNull( content );
            		}
            		else {
HXLINE( 242)			_hx_tmp = true;
            		}
HXDLIN( 242)		if (_hx_tmp) {
HXLINE( 243)			return;
            		}
HXLINE( 246)		 ::haxe::ui::util::Size usableSize = this->get_usableSize();
HXLINE( 247)		tabs->set_width(usableSize->width);
HXLINE( 249)		if ((this->get_component()->get_autoHeight() == false)) {
HXLINE( 250)			content->set_componentHeight(usableSize->height);
            		}
HXLINE( 253)		if ((this->get_component()->get_autoWidth() == false)) {
HXLINE( 254)			content->set_componentWidth(this->get_component()->get_componentWidth());
            		}
            	}


 ::haxe::ui::util::Size TabViewLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_ef0872c6a48e7ccf_259_get_usableSize)
HXLINE( 260)		 ::haxe::ui::util::Size size = this->super::get_usableSize();
HXLINE( 261)		 ::haxe::ui::components::TabBar tabs = this->get_component()->findComponent(HX_("tabview-tabs",b1,fd,eb,1e),null(),null(),null()).StaticCast<  ::haxe::ui::components::TabBar >();
HXLINE( 262)		bool _hx_tmp;
HXDLIN( 262)		if (hx::IsNotNull( tabs )) {
HXLINE( 262)			_hx_tmp = hx::IsNotNull( tabs->get_componentHeight() );
            		}
            		else {
HXLINE( 262)			_hx_tmp = false;
            		}
HXDLIN( 262)		if (_hx_tmp) {
HXLINE( 263)			 ::haxe::ui::util::Size size1 = size;
HXDLIN( 263)			Float size2 = size1->height;
HXDLIN( 263)			size1->height = (size2 - tabs->get_componentHeight());
            		}
HXLINE( 265)		return size;
            	}


 ::haxe::ui::util::Size TabViewLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_ef0872c6a48e7ccf_268_calcAutoSize)
HXLINE( 269)		 ::haxe::ui::util::Size size = this->super::calcAutoSize(exclusions);
HXLINE( 270)		return size;
            	}



hx::ObjectPtr< TabViewLayout_obj > TabViewLayout_obj::__new() {
	hx::ObjectPtr< TabViewLayout_obj > __this = new TabViewLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TabViewLayout_obj > TabViewLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	TabViewLayout_obj *__this = (TabViewLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TabViewLayout_obj), true, "haxe.ui.containers.TabViewLayout"));
	*(void **)__this = TabViewLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TabViewLayout_obj::TabViewLayout_obj()
{
}

hx::Val TabViewLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *TabViewLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TabViewLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String TabViewLayout_obj_sMemberFields[] = {
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("get_usableSize","\x22","\x8c","\xf5","\x3e"),
	HX_HCSTRING("calcAutoSize","\x85","\x81","\x3f","\xfd"),
	::String(null()) };

static void TabViewLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TabViewLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TabViewLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TabViewLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class TabViewLayout_obj::__mClass;

void TabViewLayout_obj::__register()
{
	hx::Object *dummy = new TabViewLayout_obj;
	TabViewLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.containers.TabViewLayout","\x3a","\x2d","\x1e","\x7c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TabViewLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TabViewLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TabViewLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TabViewLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabViewLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabViewLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
