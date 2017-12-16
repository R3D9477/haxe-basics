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
#ifndef INCLUDED_haxe_ui_layouts_ComponentRectangle
#include <haxe/ui/layouts/ComponentRectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalContinuousLayout
#include <haxe/ui/layouts/HorizontalContinuousLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalLayout
#include <haxe/ui/layouts/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Rectangle
#include <haxe/ui/util/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Size
#include <haxe/ui/util/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6cb5b11e53530b39_9_new,"haxe.ui.layouts.HorizontalContinuousLayout","new",0x51d94486,"haxe.ui.layouts.HorizontalContinuousLayout.new","haxe/ui/layouts/HorizontalContinuousLayout.hx",9,0x640fb469)
HX_LOCAL_STACK_FRAME(_hx_pos_6cb5b11e53530b39_12_resizeChildren,"haxe.ui.layouts.HorizontalContinuousLayout","resizeChildren",0x83e194ed,"haxe.ui.layouts.HorizontalContinuousLayout.resizeChildren","haxe/ui/layouts/HorizontalContinuousLayout.hx",12,0x640fb469)
HX_LOCAL_STACK_FRAME(_hx_pos_6cb5b11e53530b39_16_repositionChildren,"haxe.ui.layouts.HorizontalContinuousLayout","repositionChildren",0x2caa2755,"haxe.ui.layouts.HorizontalContinuousLayout.repositionChildren","haxe/ui/layouts/HorizontalContinuousLayout.hx",16,0x640fb469)
HX_LOCAL_STACK_FRAME(_hx_pos_6cb5b11e53530b39_111_get_usableSize,"haxe.ui.layouts.HorizontalContinuousLayout","get_usableSize",0x01a6ddbc,"haxe.ui.layouts.HorizontalContinuousLayout.get_usableSize","haxe/ui/layouts/HorizontalContinuousLayout.hx",111,0x640fb469)
namespace haxe{
namespace ui{
namespace layouts{

void HorizontalContinuousLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6cb5b11e53530b39_9_new)
HXDLIN(   9)		super::__construct();
            	}

Dynamic HorizontalContinuousLayout_obj::__CreateEmpty() { return new HorizontalContinuousLayout_obj; }

void *HorizontalContinuousLayout_obj::_hx_vtable = 0;

Dynamic HorizontalContinuousLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HorizontalContinuousLayout_obj > _hx_result = new HorizontalContinuousLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HorizontalContinuousLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x232229d5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x232229d5;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x5be69ae8 || inClassId==(int)0x652c3c60;
	}
}

void HorizontalContinuousLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_6cb5b11e53530b39_12_resizeChildren)
            	}


void HorizontalContinuousLayout_obj::repositionChildren(){
            	HX_GC_STACKFRAME(&_hx_pos_6cb5b11e53530b39_16_repositionChildren)
HXLINE(  17)		if ((this->get_component()->get_autoWidth() == true)) {
HXLINE(  18)			this->super::repositionChildren();
HXLINE(  19)			return;
            		}
HXLINE(  22)		Float ucx = this->get_usableWidth();
HXLINE(  23)		if ((ucx <= (int)0)) {
HXLINE(  24)			return;
            		}
HXLINE(  28)		 ::Dynamic ucx1 = this->get_component()->get_componentWidth();
HXDLIN(  28)		Float ucx2 = this->get_paddingLeft();
HXDLIN(  28)		Float ucx3 = (ucx1 - (ucx2 + this->get_paddingRight()));
HXLINE(  29)		 ::Dynamic ucy = this->get_component()->get_componentHeight();
HXDLIN(  29)		Float ucy1 = this->get_paddingTop();
HXDLIN(  29)		Float ucy2 = (ucy - (ucy1 + this->get_paddingBottom()));
HXLINE(  30)		::Array< ::Dynamic> dimensions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  31)		::Array< Float > heights = ::Array_obj< Float >::__new(0);
HXLINE(  33)		int row = (int)0;
HXLINE(  34)		Float usedCX = (int)0;
HXLINE(  35)		Float xpos = this->get_paddingLeft();
HXLINE(  36)		Float ypos = this->get_paddingTop();
HXLINE(  37)		Float rowCY = (int)0;
HXLINE(  38)		{
HXLINE(  38)			int _g = (int)0;
HXDLIN(  38)			::Array< ::Dynamic> _g1 = this->get_component()->get_childComponents();
HXDLIN(  38)			while((_g < _g1->length)){
HXLINE(  38)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  38)				_g = (_g + (int)1);
HXLINE(  39)				if ((child->get_includeInLayout() == false)) {
HXLINE(  40)					continue;
            				}
HXLINE(  43)				 ::Dynamic rc = child->get_left();
HXDLIN(  43)				 ::Dynamic rc1 = child->get_top();
HXDLIN(  43)				 ::Dynamic rc2 = child->get_componentWidth();
HXDLIN(  43)				 ::haxe::ui::layouts::ComponentRectangle rc3 =  ::haxe::ui::layouts::ComponentRectangle_obj::__alloc( HX_CTX ,rc,rc1,rc2,child->get_componentHeight());
HXLINE(  44)				if (hx::IsNotNull( child->get_percentWidth() )) {
HXLINE(  45)					rc3->width = ((Float)(ucx3 * child->get_percentWidth()) / (Float)(int)100);
            				}
            				else {
HXLINE(  47)					usedCX = (usedCX + this->get_horizontalSpacing());
            				}
HXLINE(  49)				if (hx::IsNotNull( child->get_percentHeight() )) {
HXLINE(  50)					rc3->height = ((Float)(ucy2 * child->get_percentHeight()) / (Float)(int)100);
            				}
HXLINE(  52)				rc3->component = child;
HXLINE(  53)				usedCX = (usedCX + rc3->width);
HXLINE(  55)				if ((usedCX > ucx3)) {
HXLINE(  56)					heights->push(rowCY);
HXLINE(  57)					ypos = (ypos + (rowCY + this->get_verticalSpacing()));
HXLINE(  58)					xpos = this->get_paddingLeft();
HXLINE(  59)					usedCX = rc3->width;
HXLINE(  60)					rowCY = (int)0;
HXLINE(  61)					row = (row + (int)1);
            				}
HXLINE(  64)				if ((dimensions->length <= row)) {
HXLINE(  65)					dimensions->push(::Array_obj< ::Dynamic>::__new(0));
            				}
HXLINE(  68)				rc3->left = xpos;
HXLINE(  69)				rc3->top = ypos;
HXLINE(  70)				dimensions->__get(row).StaticCast< ::Array< ::Dynamic> >()->push(rc3);
HXLINE(  71)				xpos = (xpos + rc3->width);
HXLINE(  72)				if ((rc3->height > rowCY)) {
HXLINE(  73)					rowCY = rc3->height;
            				}
            			}
            		}
HXLINE(  77)		if ((rowCY > (int)0)) {
HXLINE(  78)			heights->push(rowCY);
            		}
HXLINE(  82)		int x = (int)0;
HXLINE(  83)		{
HXLINE(  83)			int _g2 = (int)0;
HXDLIN(  83)			while((_g2 < dimensions->length)){
HXLINE(  83)				::Array< ::Dynamic> r = dimensions->__get(_g2).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  83)				_g2 = (_g2 + (int)1);
HXLINE(  84)				Float height = heights->__get(x);
HXLINE(  85)				Float spaceX = ((Float)(r->length - (int)1) / (Float)r->length);
HXDLIN(  85)				Float spaceX1 = (spaceX * this->get_horizontalSpacing());
HXLINE(  86)				int n = (int)0;
HXLINE(  87)				{
HXLINE(  87)					int _g11 = (int)0;
HXDLIN(  87)					while((_g11 < r->length)){
HXLINE(  87)						 ::haxe::ui::layouts::ComponentRectangle c = r->__get(_g11).StaticCast<  ::haxe::ui::layouts::ComponentRectangle >();
HXDLIN(  87)						_g11 = (_g11 + (int)1);
HXLINE(  88)						{
HXLINE(  88)							::String _g21 = this->verticalAlign(c->component);
HXDLIN(  88)							::String _hx_switch_0 = _g21;
            							if (  (_hx_switch_0==HX_("bottom",eb,e6,78,65)) ){
HXLINE(  92)								 ::haxe::ui::layouts::ComponentRectangle c1 = c;
HXDLIN(  92)								c1->top = (c1->top + (height - c->height));
HXDLIN(  92)								goto _hx_goto_5;
            							}
            							if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(  90)								 ::haxe::ui::layouts::ComponentRectangle c2 = c;
HXDLIN(  90)								c2->top = (c2->top + (((Float)height / (Float)(int)2) - ((Float)c->height / (Float)(int)2)));
HXDLIN(  90)								goto _hx_goto_5;
            							}
            							/* default */{
            							}
            							_hx_goto_5:;
            						}
HXLINE(  96)						if (hx::IsNotNull( c->component->get_percentWidth() )) {
HXLINE(  97)							 ::haxe::ui::layouts::ComponentRectangle c3 = c;
HXDLIN(  97)							Float c4 = c3->left;
HXDLIN(  97)							c3->left = (c4 + (n * (this->get_horizontalSpacing() - spaceX1)));
HXLINE(  98)							 ::haxe::ui::layouts::ComponentRectangle c5 = c;
HXDLIN(  98)							c5->width = (c5->width - spaceX1);
            						}
            						else {
HXLINE( 100)							 ::haxe::ui::layouts::ComponentRectangle c6 = c;
HXDLIN( 100)							Float c7 = c6->left;
HXDLIN( 100)							c6->left = (c7 + (n * this->get_horizontalSpacing()));
            						}
HXLINE( 103)						c->apply();
HXLINE( 105)						n = (n + (int)1);
            					}
            				}
HXLINE( 107)				x = (x + (int)1);
            			}
            		}
            	}


 ::haxe::ui::util::Size HorizontalContinuousLayout_obj::get_usableSize(){
            	HX_GC_STACKFRAME(&_hx_pos_6cb5b11e53530b39_111_get_usableSize)
HXLINE( 112)		if ((this->get_component()->get_autoWidth() == true)) {
HXLINE( 113)			return this->super::get_usableSize();
            		}
HXLINE( 116)		Float ucx = (int)0;
HXLINE( 117)		if (hx::IsNotNull( this->_component->get_componentWidth() )) {
HXLINE( 118)			ucx = this->_component->get_componentWidth();
HXLINE( 119)			Float ucx1 = this->get_paddingLeft();
HXDLIN( 119)			ucx = (ucx - (ucx1 + this->get_paddingRight()));
            		}
HXLINE( 122)		Float ucy = (int)0;
HXLINE( 123)		if (hx::IsNotNull( this->_component->get_componentHeight() )) {
HXLINE( 124)			ucy = this->_component->get_componentHeight();
HXLINE( 125)			Float ucy1 = this->get_paddingTop();
HXDLIN( 125)			ucy = (ucy - (ucy1 + this->get_paddingBottom()));
            		}
HXLINE( 128)		return  ::haxe::ui::util::Size_obj::__alloc( HX_CTX ,ucx,ucy);
            	}



hx::ObjectPtr< HorizontalContinuousLayout_obj > HorizontalContinuousLayout_obj::__new() {
	hx::ObjectPtr< HorizontalContinuousLayout_obj > __this = new HorizontalContinuousLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< HorizontalContinuousLayout_obj > HorizontalContinuousLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	HorizontalContinuousLayout_obj *__this = (HorizontalContinuousLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalContinuousLayout_obj), true, "haxe.ui.layouts.HorizontalContinuousLayout"));
	*(void **)__this = HorizontalContinuousLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HorizontalContinuousLayout_obj::HorizontalContinuousLayout_obj()
{
}

hx::Val HorizontalContinuousLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
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
static hx::StorageInfo *HorizontalContinuousLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HorizontalContinuousLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalContinuousLayout_obj_sMemberFields[] = {
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("get_usableSize","\x22","\x8c","\xf5","\x3e"),
	::String(null()) };

static void HorizontalContinuousLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HorizontalContinuousLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HorizontalContinuousLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HorizontalContinuousLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class HorizontalContinuousLayout_obj::__mClass;

void HorizontalContinuousLayout_obj::__register()
{
	hx::Object *dummy = new HorizontalContinuousLayout_obj;
	HorizontalContinuousLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.layouts.HorizontalContinuousLayout","\x94","\x49","\xf7","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HorizontalContinuousLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HorizontalContinuousLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HorizontalContinuousLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HorizontalContinuousLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalContinuousLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalContinuousLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
