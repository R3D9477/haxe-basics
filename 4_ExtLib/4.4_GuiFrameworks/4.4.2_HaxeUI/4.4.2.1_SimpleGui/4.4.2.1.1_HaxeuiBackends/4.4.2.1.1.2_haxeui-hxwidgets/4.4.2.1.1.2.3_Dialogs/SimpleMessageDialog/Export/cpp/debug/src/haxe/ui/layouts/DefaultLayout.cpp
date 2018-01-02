// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6c73e1b2de27701d_7_new,"haxe.ui.layouts.DefaultLayout","new",0xcb1d6426,"haxe.ui.layouts.DefaultLayout.new","haxe/ui/layouts/DefaultLayout.hx",7,0x7dc0caab)
HX_LOCAL_STACK_FRAME(_hx_pos_6c73e1b2de27701d_10_resizeChildren,"haxe.ui.layouts.DefaultLayout","resizeChildren",0x0f08594d,"haxe.ui.layouts.DefaultLayout.resizeChildren","haxe/ui/layouts/DefaultLayout.hx",10,0x7dc0caab)
HX_LOCAL_STACK_FRAME(_hx_pos_6c73e1b2de27701d_31_repositionChildren,"haxe.ui.layouts.DefaultLayout","repositionChildren",0x12fa9bb5,"haxe.ui.layouts.DefaultLayout.repositionChildren","haxe/ui/layouts/DefaultLayout.hx",31,0x7dc0caab)
namespace haxe{
namespace ui{
namespace layouts{

void DefaultLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6c73e1b2de27701d_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic DefaultLayout_obj::__CreateEmpty() { return new DefaultLayout_obj; }

void *DefaultLayout_obj::_hx_vtable = 0;

Dynamic DefaultLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DefaultLayout_obj > _hx_result = new DefaultLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DefaultLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x548a03f5;
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void DefaultLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_6c73e1b2de27701d_10_resizeChildren)
HXLINE(  11)		 ::haxe::ui::util::Size usableSize = this->get_usableSize();
HXLINE(  12)		{
HXLINE(  12)			int _g = (int)0;
HXDLIN(  12)			::Array< ::Dynamic> _g1 = this->get_component()->get_childComponents();
HXDLIN(  12)			while((_g < _g1->length)){
HXLINE(  12)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  12)				_g = (_g + (int)1);
HXLINE(  13)				if ((child->get_includeInLayout() == false)) {
HXLINE(  14)					continue;
            				}
HXLINE(  17)				 ::Dynamic cx = null();
HXLINE(  18)				 ::Dynamic cy = null();
HXLINE(  20)				if (hx::IsNotNull( child->get_percentWidth() )) {
HXLINE(  21)					Float usableSize1 = usableSize->width;
HXDLIN(  21)					Float cx1 = ((Float)(usableSize1 * child->get_percentWidth()) / (Float)(int)100);
HXDLIN(  21)					Float cx2 = (cx1 - this->marginLeft(child));
HXDLIN(  21)					cx = (cx2 - this->marginRight(child));
            				}
HXLINE(  23)				if (hx::IsNotNull( child->get_percentHeight() )) {
HXLINE(  24)					Float usableSize2 = usableSize->height;
HXDLIN(  24)					Float cy1 = ((Float)(usableSize2 * child->get_percentHeight()) / (Float)(int)100);
HXDLIN(  24)					Float cy2 = (cy1 - this->marginTop(child));
HXDLIN(  24)					cy = (cy2 - this->marginBottom(child));
            				}
HXLINE(  27)				child->resizeComponent(cx,cy);
            			}
            		}
            	}


void DefaultLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_6c73e1b2de27701d_31_repositionChildren)
HXLINE(  32)		 ::haxe::ui::util::Size usableSize = this->get_component()->get_layout()->get_usableSize();
HXLINE(  34)		{
HXLINE(  34)			int _g = (int)0;
HXDLIN(  34)			::Array< ::Dynamic> _g1 = this->get_component()->get_childComponents();
HXDLIN(  34)			while((_g < _g1->length)){
HXLINE(  34)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  34)				_g = (_g + (int)1);
HXLINE(  35)				if ((child->get_includeInLayout() == false)) {
HXLINE(  36)					continue;
            				}
HXLINE(  39)				Float xpos = (int)0;
HXLINE(  40)				Float ypos = (int)0;
HXLINE(  42)				{
HXLINE(  42)					::String _g2 = this->horizontalAlign(child);
HXDLIN(  42)					::String _hx_switch_0 = _g2;
            					if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(  44)						 ::Dynamic xpos1 = this->get_component()->get_componentWidth();
HXDLIN(  44)						Float xpos2 = ((Float)(xpos1 - child->get_componentWidth()) / (Float)(int)2);
HXDLIN(  44)						Float xpos3 = (xpos2 + this->marginLeft(child));
HXDLIN(  44)						xpos = (xpos3 - this->marginRight(child));
HXDLIN(  44)						goto _hx_goto_4;
            					}
            					if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(  46)						 ::Dynamic xpos4 = this->get_component()->get_componentWidth();
HXDLIN(  46)						 ::Dynamic xpos5 = child->get_componentWidth();
HXDLIN(  46)						Float xpos6 = (xpos5 + this->get_paddingRight());
HXDLIN(  46)						xpos = (xpos4 - (xpos6 + this->marginRight(child)));
HXDLIN(  46)						goto _hx_goto_4;
            					}
            					/* default */{
HXLINE(  48)						Float xpos7 = this->get_paddingLeft();
HXDLIN(  48)						xpos = (xpos7 + this->marginLeft(child));
            					}
            					_hx_goto_4:;
            				}
HXLINE(  51)				{
HXLINE(  51)					::String _g3 = this->verticalAlign(child);
HXDLIN(  51)					::String _hx_switch_1 = _g3;
            					if (  (_hx_switch_1==HX_("bottom",eb,e6,78,65)) ){
HXLINE(  55)						 ::Dynamic ypos1 = this->get_component()->get_componentHeight();
HXDLIN(  55)						 ::Dynamic ypos2 = child->get_componentHeight();
HXDLIN(  55)						Float ypos3 = (ypos2 + this->get_paddingBottom());
HXDLIN(  55)						ypos = (ypos1 - (ypos3 + this->marginBottom(child)));
HXDLIN(  55)						goto _hx_goto_5;
            					}
            					if (  (_hx_switch_1==HX_("center",d5,25,db,05)) ){
HXLINE(  53)						 ::Dynamic ypos4 = this->get_component()->get_componentHeight();
HXDLIN(  53)						Float ypos5 = ((Float)(ypos4 - child->get_componentHeight()) / (Float)(int)2);
HXDLIN(  53)						Float ypos6 = (ypos5 + this->marginTop(child));
HXDLIN(  53)						ypos = (ypos6 - this->marginBottom(child));
HXDLIN(  53)						goto _hx_goto_5;
            					}
            					/* default */{
HXLINE(  57)						Float ypos7 = this->get_paddingTop();
HXDLIN(  57)						ypos = (ypos7 + this->marginTop(child));
            					}
            					_hx_goto_5:;
            				}
HXLINE(  60)				child->moveComponent(xpos,ypos);
            			}
            		}
            	}



hx::ObjectPtr< DefaultLayout_obj > DefaultLayout_obj::__new() {
	hx::ObjectPtr< DefaultLayout_obj > __this = new DefaultLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< DefaultLayout_obj > DefaultLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	DefaultLayout_obj *__this = (DefaultLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DefaultLayout_obj), true, "haxe.ui.layouts.DefaultLayout"));
	*(void **)__this = DefaultLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DefaultLayout_obj::DefaultLayout_obj()
{
}

hx::Val DefaultLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *DefaultLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DefaultLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String DefaultLayout_obj_sMemberFields[] = {
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	::String(null()) };

static void DefaultLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DefaultLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultLayout_obj::__mClass;

void DefaultLayout_obj::__register()
{
	hx::Object *dummy = new DefaultLayout_obj;
	DefaultLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.layouts.DefaultLayout","\x34","\x19","\x8b","\x95");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DefaultLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DefaultLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DefaultLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
