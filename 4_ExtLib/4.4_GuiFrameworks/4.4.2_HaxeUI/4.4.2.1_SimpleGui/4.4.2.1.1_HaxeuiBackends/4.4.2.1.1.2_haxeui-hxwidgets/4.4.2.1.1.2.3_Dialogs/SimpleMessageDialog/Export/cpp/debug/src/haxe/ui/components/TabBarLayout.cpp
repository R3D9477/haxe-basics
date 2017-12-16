// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TabBarLayout
#include <haxe/ui/components/TabBarLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8e53d89dc518a20b_255_new,"haxe.ui.components.TabBarLayout","new",0x3fc59560,"haxe.ui.components.TabBarLayout.new","haxe/ui/components/TabBar.hx",255,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_8e53d89dc518a20b_256_repositionChildren,"haxe.ui.components.TabBarLayout","repositionChildren",0x741adbbb,"haxe.ui.components.TabBarLayout.repositionChildren","haxe/ui/components/TabBar.hx",256,0xaabf3019)
namespace haxe{
namespace ui{
namespace components{

void TabBarLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8e53d89dc518a20b_255_new)
HXDLIN( 255)		super::__construct();
            	}

Dynamic TabBarLayout_obj::__CreateEmpty() { return new TabBarLayout_obj; }

void *TabBarLayout_obj::_hx_vtable = 0;

Dynamic TabBarLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TabBarLayout_obj > _hx_result = new TabBarLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabBarLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x214fb1b8) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x214fb1b8;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void TabBarLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_8e53d89dc518a20b_256_repositionChildren)
HXLINE( 257)		this->super::repositionChildren();
HXLINE( 259)		 ::haxe::ui::components::Button left = this->_component->findComponent(HX_("tabbar-scroll-left",18,70,e0,85),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 260)		 ::haxe::ui::components::Button right = this->_component->findComponent(HX_("tabbar-scroll-right",ab,b2,8e,15),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 261)		bool _hx_tmp;
HXDLIN( 261)		if (hx::IsNotNull( left )) {
HXLINE( 261)			_hx_tmp = (this->hidden(left) == false);
            		}
            		else {
HXLINE( 261)			_hx_tmp = false;
            		}
HXDLIN( 261)		if (_hx_tmp) {
HXLINE( 262)			Float x = this->_component->get_width();
HXDLIN( 262)			Float x1 = (x - left->get_width());
HXLINE( 263)			if (hx::IsNotNull( right )) {
HXLINE( 264)				x1 = (x1 - right->get_width());
            			}
HXLINE( 266)			left->set_left(x1);
HXLINE( 267)			Float _hx_tmp1 = ((Float)this->_component->get_height() / (Float)(int)2);
HXDLIN( 267)			left->set_top((_hx_tmp1 - ((Float)left->get_height() / (Float)(int)2)));
            		}
HXLINE( 270)		bool _hx_tmp2;
HXDLIN( 270)		if (hx::IsNotNull( right )) {
HXLINE( 270)			_hx_tmp2 = (this->hidden(right) == false);
            		}
            		else {
HXLINE( 270)			_hx_tmp2 = false;
            		}
HXDLIN( 270)		if (_hx_tmp2) {
HXLINE( 271)			Float _hx_tmp3 = this->_component->get_width();
HXDLIN( 271)			right->set_left((_hx_tmp3 - right->get_width()));
HXLINE( 272)			Float _hx_tmp4 = ((Float)this->_component->get_height() / (Float)(int)2);
HXDLIN( 272)			right->set_top((_hx_tmp4 - ((Float)right->get_height() / (Float)(int)2)));
            		}
            	}



hx::ObjectPtr< TabBarLayout_obj > TabBarLayout_obj::__new() {
	hx::ObjectPtr< TabBarLayout_obj > __this = new TabBarLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TabBarLayout_obj > TabBarLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	TabBarLayout_obj *__this = (TabBarLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TabBarLayout_obj), true, "haxe.ui.components.TabBarLayout"));
	*(void **)__this = TabBarLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TabBarLayout_obj::TabBarLayout_obj()
{
}

hx::Val TabBarLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TabBarLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TabBarLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String TabBarLayout_obj_sMemberFields[] = {
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	::String(null()) };

static void TabBarLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TabBarLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TabBarLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TabBarLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class TabBarLayout_obj::__mClass;

void TabBarLayout_obj::__register()
{
	hx::Object *dummy = new TabBarLayout_obj;
	TabBarLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.TabBarLayout","\x6e","\xa5","\xbf","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TabBarLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TabBarLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TabBarLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TabBarLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabBarLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabBarLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
