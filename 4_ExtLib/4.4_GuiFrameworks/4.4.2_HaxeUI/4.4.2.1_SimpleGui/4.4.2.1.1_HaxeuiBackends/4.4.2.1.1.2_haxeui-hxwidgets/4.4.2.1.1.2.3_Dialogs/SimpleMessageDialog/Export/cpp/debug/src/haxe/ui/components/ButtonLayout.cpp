// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonLayout
#include <haxe/ui/components/ButtonLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_49c59bbbec578e16_364_new,"haxe.ui.components.ButtonLayout","new",0xc6d1ddd4,"haxe.ui.components.ButtonLayout.new","haxe/ui/components/Button.hx",364,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_368_get_iconPosition,"haxe.ui.components.ButtonLayout","get_iconPosition",0x015f6bd7,"haxe.ui.components.ButtonLayout.get_iconPosition","haxe/ui/components/Button.hx",368,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_375_repositionChildren,"haxe.ui.components.ButtonLayout","repositionChildren",0x87f235c7,"haxe.ui.components.ButtonLayout.repositionChildren","haxe/ui/components/Button.hx",375,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_49c59bbbec578e16_461_getTextAlignPos,"haxe.ui.components.ButtonLayout","getTextAlignPos",0x0e58c6c6,"haxe.ui.components.ButtonLayout.getTextAlignPos","haxe/ui/components/Button.hx",461,0x45086125)
namespace haxe{
namespace ui{
namespace components{

void ButtonLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_364_new)
HXDLIN( 364)		super::__construct();
            	}

Dynamic ButtonLayout_obj::__CreateEmpty() { return new ButtonLayout_obj; }

void *ButtonLayout_obj::_hx_vtable = 0;

Dynamic ButtonLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ButtonLayout_obj > _hx_result = new ButtonLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ButtonLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x270192f4) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x270192f4;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

::String ButtonLayout_obj::get_iconPosition(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_368_get_iconPosition)
HXLINE( 369)		bool _hx_tmp;
HXDLIN( 369)		if (hx::IsNotNull( this->get_component()->get_style() )) {
HXLINE( 369)			_hx_tmp = hx::IsNull( this->get_component()->get_style()->iconPosition );
            		}
            		else {
HXLINE( 369)			_hx_tmp = true;
            		}
HXDLIN( 369)		if (_hx_tmp) {
HXLINE( 370)			return HX_("left",07,08,b0,47);
            		}
HXLINE( 372)		return this->get_component()->get_style()->iconPosition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonLayout_obj,get_iconPosition,return )

void ButtonLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_375_repositionChildren)
HXLINE( 376)		this->super::repositionChildren();
HXLINE( 378)		 ::haxe::ui::components::Label label = this->get_component()->findComponent(HX_("button-label",19,ae,e7,e0),null(),null(),null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 379)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(HX_("button-icon",f4,52,38,e9),null(),null(),null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 381)		{
HXLINE( 381)			::String _g = this->get_iconPosition();
HXDLIN( 381)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==HX_("far-right",a6,3e,4f,24)) ){
HXLINE( 383)				bool _hx_tmp;
HXDLIN( 383)				if (hx::IsNotNull( label )) {
HXLINE( 383)					_hx_tmp = hx::IsNotNull( icon );
            				}
            				else {
HXLINE( 383)					_hx_tmp = false;
            				}
HXDLIN( 383)				if (_hx_tmp) {
HXLINE( 384)					 ::Dynamic cx = label->get_componentWidth();
HXDLIN( 384)					Float cx1 = (cx + icon->get_componentWidth());
HXDLIN( 384)					Float cx2 = (cx1 + this->get_horizontalSpacing());
HXLINE( 385)					Float x = ((Float)this->get_component()->get_componentWidth() / (Float)(int)2);
HXDLIN( 385)					Float x1 = ::Std_obj::_hx_int((x - ((Float)cx2 / (Float)(int)2)));
HXLINE( 387)					if ((this->get_iconPosition() == HX_("far-right",a6,3e,4f,24))) {
HXLINE( 388)						Float _hx_tmp1 = (cx2 + this->get_paddingLeft());
HXDLIN( 388)						Float _hx_tmp2 = (_hx_tmp1 + this->get_paddingRight());
HXDLIN( 388)						if (hx::IsLess( _hx_tmp2,this->get_component()->get_componentWidth() )) {
HXLINE( 389)							label->set_left(this->get_paddingLeft());
HXLINE( 390)							Float x2 = this->get_horizontalSpacing();
HXDLIN( 390)							x1 = (x1 + (x2 + label->get_componentWidth()));
HXLINE( 391)							 ::Dynamic _hx_tmp3 = this->get_component()->get_componentWidth();
HXDLIN( 391)							Float _hx_tmp4 = (_hx_tmp3 - icon->get_componentWidth());
HXDLIN( 391)							Float _hx_tmp5 = (_hx_tmp4 - this->get_paddingRight());
HXDLIN( 391)							Float _hx_tmp6 = (_hx_tmp5 + this->marginLeft(icon));
HXDLIN( 391)							icon->set_left((_hx_tmp6 - this->marginRight(icon)));
            						}
            						else {
HXLINE( 393)							label->set_left(this->get_paddingLeft());
HXLINE( 394)							Float x3 = this->get_horizontalSpacing();
HXDLIN( 394)							x1 = (x1 + (x3 + label->get_componentWidth()));
HXLINE( 395)							Float _hx_tmp7 = (x1 + this->marginLeft(icon));
HXDLIN( 395)							icon->set_left((_hx_tmp7 - this->marginRight(icon)));
            						}
            					}
HXLINE( 400)					Float _hx_tmp8 = ((Float)this->get_component()->get_componentHeight() / (Float)(int)2);
HXDLIN( 400)					int _hx_tmp9 = ::Std_obj::_hx_int((_hx_tmp8 - ((Float)label->get_componentHeight() / (Float)(int)2)));
HXDLIN( 400)					Float _hx_tmp10 = (_hx_tmp9 + this->marginTop(label));
HXDLIN( 400)					label->set_top((_hx_tmp10 - this->marginBottom(label)));
HXLINE( 401)					Float _hx_tmp11 = ((Float)this->get_component()->get_componentHeight() / (Float)(int)2);
HXDLIN( 401)					int _hx_tmp12 = ::Std_obj::_hx_int((_hx_tmp11 - ((Float)icon->get_componentHeight() / (Float)(int)2)));
HXDLIN( 401)					Float _hx_tmp13 = (_hx_tmp12 + this->marginTop(icon));
HXDLIN( 401)					icon->set_top((_hx_tmp13 - this->marginBottom(icon)));
            				}
            				else {
HXLINE( 402)					if (hx::IsNotNull( label )) {
HXLINE( 403)						label->set_left(this->get_paddingLeft());
HXLINE( 404)						Float _hx_tmp14 = ((Float)this->get_component()->get_componentHeight() / (Float)(int)2);
HXDLIN( 404)						int _hx_tmp15 = ::Std_obj::_hx_int((_hx_tmp14 - ((Float)label->get_componentHeight() / (Float)(int)2)));
HXDLIN( 404)						Float _hx_tmp16 = (_hx_tmp15 + this->marginTop(label));
HXDLIN( 404)						label->set_top((_hx_tmp16 - this->marginBottom(label)));
            					}
            					else {
HXLINE( 405)						if (hx::IsNotNull( icon )) {
HXLINE( 406)							Float _hx_tmp17 = ((Float)this->get_component()->get_componentWidth() / (Float)(int)2);
HXDLIN( 406)							icon->set_left(::Std_obj::_hx_int((_hx_tmp17 - ((Float)icon->get_componentWidth() / (Float)(int)2))));
HXLINE( 407)							Float _hx_tmp18 = ((Float)this->get_component()->get_componentHeight() / (Float)(int)2);
HXDLIN( 407)							int _hx_tmp19 = ::Std_obj::_hx_int((_hx_tmp18 - ((Float)icon->get_componentHeight() / (Float)(int)2)));
HXDLIN( 407)							Float _hx_tmp20 = (_hx_tmp19 + this->marginTop(icon));
HXDLIN( 407)							icon->set_top((_hx_tmp20 - this->marginBottom(icon)));
            						}
            					}
            				}
HXLINE( 383)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ||  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 410)				bool _hx_tmp21;
HXDLIN( 410)				if (hx::IsNotNull( label )) {
HXLINE( 410)					_hx_tmp21 = hx::IsNotNull( icon );
            				}
            				else {
HXLINE( 410)					_hx_tmp21 = false;
            				}
HXDLIN( 410)				if (_hx_tmp21) {
HXLINE( 411)					 ::Dynamic cx3 = label->get_componentWidth();
HXDLIN( 411)					Float cx4 = (cx3 + icon->get_componentWidth());
HXDLIN( 411)					Float cx5 = (cx4 + this->get_horizontalSpacing());
HXLINE( 412)					Float x4 = ((Float)this->get_component()->get_componentWidth() / (Float)(int)2);
HXDLIN( 412)					Float x5 = ::Std_obj::_hx_int((x4 - ((Float)cx5 / (Float)(int)2)));
HXLINE( 414)					if ((this->get_iconPosition() == HX_("right",dc,0b,64,e9))) {
HXLINE( 415)						Float _hx_tmp22 = (x5 + this->marginLeft(label));
HXDLIN( 415)						label->set_left((_hx_tmp22 - this->marginRight(label)));
HXLINE( 416)						Float x6 = this->get_horizontalSpacing();
HXDLIN( 416)						x5 = (x5 + (x6 + label->get_componentWidth()));
HXLINE( 417)						Float _hx_tmp23 = (x5 + this->marginLeft(icon));
HXDLIN( 417)						icon->set_left((_hx_tmp23 - this->marginRight(icon)));
            					}
            					else {
HXLINE( 419)						Float _hx_tmp24 = (x5 + this->marginLeft(icon));
HXDLIN( 419)						icon->set_left((_hx_tmp24 - this->marginRight(icon)));
HXLINE( 420)						Float x7 = this->get_horizontalSpacing();
HXDLIN( 420)						x5 = (x5 + (x7 + icon->get_componentWidth()));
HXLINE( 421)						Float _hx_tmp25 = (x5 + this->marginLeft(label));
HXDLIN( 421)						label->set_left((_hx_tmp25 - this->marginRight(label)));
            					}
HXLINE( 424)					Float _hx_tmp26 = ((Float)this->get_component()->get_componentHeight() / (Float)(int)2);
HXDLIN( 424)					int _hx_tmp27 = ::Std_obj::_hx_int((_hx_tmp26 - ((Float)label->get_componentHeight() / (Float)(int)2)));
HXDLIN( 424)					Float _hx_tmp28 = (_hx_tmp27 + this->marginTop(label));
HXDLIN( 424)					label->set_top((_hx_tmp28 - this->marginBottom(label)));
HXLINE( 425)					Float _hx_tmp29 = ((Float)this->get_component()->get_componentHeight() / (Float)(int)2);
HXDLIN( 425)					int _hx_tmp30 = ::Std_obj::_hx_int((_hx_tmp29 - ((Float)icon->get_componentHeight() / (Float)(int)2)));
HXDLIN( 425)					Float _hx_tmp31 = (_hx_tmp30 + this->marginTop(icon));
HXDLIN( 425)					icon->set_top((_hx_tmp31 - this->marginBottom(icon)));
            				}
            				else {
HXLINE( 426)					if (hx::IsNotNull( label )) {
HXLINE( 427)						label->set_left(this->getTextAlignPos(label,this->get_component()->get_componentWidth()));
HXLINE( 428)						Float _hx_tmp32 = ((Float)this->get_component()->get_componentHeight() / (Float)(int)2);
HXDLIN( 428)						int _hx_tmp33 = ::Std_obj::_hx_int((_hx_tmp32 - ((Float)label->get_componentHeight() / (Float)(int)2)));
HXDLIN( 428)						Float _hx_tmp34 = (_hx_tmp33 + this->marginTop(label));
HXDLIN( 428)						label->set_top((_hx_tmp34 - this->marginBottom(label)));
            					}
            					else {
HXLINE( 429)						if (hx::IsNotNull( icon )) {
HXLINE( 430)							Float _hx_tmp35 = ((Float)this->get_component()->get_componentWidth() / (Float)(int)2);
HXDLIN( 430)							icon->set_left(::Std_obj::_hx_int((_hx_tmp35 - ((Float)icon->get_componentWidth() / (Float)(int)2))));
HXLINE( 431)							Float _hx_tmp36 = ((Float)this->get_component()->get_componentHeight() / (Float)(int)2);
HXDLIN( 431)							int _hx_tmp37 = ::Std_obj::_hx_int((_hx_tmp36 - ((Float)icon->get_componentHeight() / (Float)(int)2)));
HXDLIN( 431)							Float _hx_tmp38 = (_hx_tmp37 + this->marginTop(icon));
HXDLIN( 431)							icon->set_top((_hx_tmp38 - this->marginBottom(icon)));
            						}
            					}
            				}
HXLINE( 410)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("bottom",eb,e6,78,65)) ||  (_hx_switch_0==HX_("top",95,66,58,00)) ){
HXLINE( 434)				bool _hx_tmp39;
HXDLIN( 434)				if (hx::IsNotNull( label )) {
HXLINE( 434)					_hx_tmp39 = hx::IsNotNull( icon );
            				}
            				else {
HXLINE( 434)					_hx_tmp39 = false;
            				}
HXDLIN( 434)				if (_hx_tmp39) {
HXLINE( 435)					 ::Dynamic cy = label->get_componentHeight();
HXDLIN( 435)					Float cy1 = (cy + icon->get_componentHeight());
HXDLIN( 435)					Float cy2 = (cy1 + this->get_verticalSpacing());
HXLINE( 436)					Float y = ((Float)this->get_component()->get_componentHeight() / (Float)(int)2);
HXDLIN( 436)					Float y1 = ::Std_obj::_hx_int((y - ((Float)cy2 / (Float)(int)2)));
HXLINE( 438)					if ((this->get_iconPosition() == HX_("bottom",eb,e6,78,65))) {
HXLINE( 439)						Float _hx_tmp40 = (y1 + this->marginTop(label));
HXDLIN( 439)						label->set_top((_hx_tmp40 - this->marginBottom(label)));
HXLINE( 440)						Float y2 = this->get_verticalSpacing();
HXDLIN( 440)						y1 = (y1 + (y2 + label->get_componentHeight()));
HXLINE( 441)						Float _hx_tmp41 = (y1 + this->marginTop(icon));
HXDLIN( 441)						icon->set_top((_hx_tmp41 - this->marginBottom(icon)));
            					}
            					else {
HXLINE( 443)						Float _hx_tmp42 = (y1 + this->marginTop(icon));
HXDLIN( 443)						icon->set_top((_hx_tmp42 - this->marginBottom(icon)));
HXLINE( 444)						Float y3 = this->get_verticalSpacing();
HXDLIN( 444)						y1 = (y1 + (y3 + icon->get_componentHeight()));
HXLINE( 445)						Float _hx_tmp43 = (y1 + this->marginTop(label));
HXDLIN( 445)						label->set_top((_hx_tmp43 - this->marginBottom(label)));
            					}
HXLINE( 448)					label->set_left(this->getTextAlignPos(label,this->get_component()->get_componentWidth()));
HXLINE( 449)					Float _hx_tmp44 = ((Float)this->get_component()->get_componentWidth() / (Float)(int)2);
HXDLIN( 449)					int _hx_tmp45 = ::Std_obj::_hx_int((_hx_tmp44 - ((Float)icon->get_componentWidth() / (Float)(int)2)));
HXDLIN( 449)					Float _hx_tmp46 = (_hx_tmp45 + this->marginLeft(icon));
HXDLIN( 449)					icon->set_left((_hx_tmp46 - this->marginRight(icon)));
            				}
            				else {
HXLINE( 450)					if (hx::IsNotNull( label )) {
HXLINE( 451)						Float _hx_tmp47 = ((Float)this->get_component()->get_componentWidth() / (Float)(int)2);
HXDLIN( 451)						int _hx_tmp48 = ::Std_obj::_hx_int((_hx_tmp47 - ((Float)label->get_componentWidth() / (Float)(int)2)));
HXDLIN( 451)						Float _hx_tmp49 = (_hx_tmp48 + this->marginLeft(label));
HXDLIN( 451)						label->set_left((_hx_tmp49 - this->marginRight(label)));
HXLINE( 452)						Float _hx_tmp50 = ((Float)this->get_component()->get_componentHeight() / (Float)(int)2);
HXDLIN( 452)						int _hx_tmp51 = ::Std_obj::_hx_int((_hx_tmp50 - ((Float)label->get_componentHeight() / (Float)(int)2)));
HXDLIN( 452)						Float _hx_tmp52 = (_hx_tmp51 + this->marginTop(label));
HXDLIN( 452)						label->set_top((_hx_tmp52 - this->marginBottom(label)));
            					}
            					else {
HXLINE( 453)						if (hx::IsNotNull( icon )) {
HXLINE( 454)							Float _hx_tmp53 = ((Float)this->get_component()->get_componentWidth() / (Float)(int)2);
HXDLIN( 454)							int _hx_tmp54 = ::Std_obj::_hx_int((_hx_tmp53 - ((Float)icon->get_componentWidth() / (Float)(int)2)));
HXDLIN( 454)							Float _hx_tmp55 = (_hx_tmp54 + this->marginLeft(icon));
HXDLIN( 454)							icon->set_left((_hx_tmp55 - this->marginRight(icon)));
HXLINE( 455)							Float _hx_tmp56 = ((Float)this->get_component()->get_componentHeight() / (Float)(int)2);
HXDLIN( 455)							int _hx_tmp57 = ::Std_obj::_hx_int((_hx_tmp56 - ((Float)icon->get_componentHeight() / (Float)(int)2)));
HXDLIN( 455)							Float _hx_tmp58 = (_hx_tmp57 + this->marginTop(icon));
HXDLIN( 455)							icon->set_top((_hx_tmp58 - this->marginBottom(icon)));
            						}
            					}
            				}
HXLINE( 434)				goto _hx_goto_2;
            			}
            			_hx_goto_2:;
            		}
            	}


Float ButtonLayout_obj::getTextAlignPos( ::haxe::ui::components::Label label,Float usableWidth){
            	HX_STACKFRAME(&_hx_pos_49c59bbbec578e16_461_getTextAlignPos)
HXDLIN( 461)		::String _g = hx::TCast<  ::haxe::ui::components::Button >::cast(this->get_component())->get_textAlign();
HXDLIN( 461)		::String _hx_switch_0 = _g;
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 463)			Float _hx_tmp = this->marginLeft(label);
HXDLIN( 463)			return (_hx_tmp + this->get_paddingLeft());
HXDLIN( 463)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 465)			Float _hx_tmp1 = (usableWidth - label->get_componentWidth());
HXDLIN( 465)			Float _hx_tmp2 = (_hx_tmp1 - this->marginRight(label));
HXDLIN( 465)			return (_hx_tmp2 - this->get_paddingRight());
HXDLIN( 465)			goto _hx_goto_4;
            		}
            		/* default */{
HXLINE( 467)			int _hx_tmp3 = ::Std_obj::_hx_int((((Float)usableWidth / (Float)(int)2) - ((Float)label->get_componentWidth() / (Float)(int)2)));
HXDLIN( 467)			Float _hx_tmp4 = (_hx_tmp3 + this->marginLeft(label));
HXDLIN( 467)			return (_hx_tmp4 - this->marginRight(label));
            		}
            		_hx_goto_4:;
HXLINE( 461)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ButtonLayout_obj,getTextAlignPos,return )


hx::ObjectPtr< ButtonLayout_obj > ButtonLayout_obj::__new() {
	hx::ObjectPtr< ButtonLayout_obj > __this = new ButtonLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ButtonLayout_obj > ButtonLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	ButtonLayout_obj *__this = (ButtonLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ButtonLayout_obj), true, "haxe.ui.components.ButtonLayout"));
	*(void **)__this = ButtonLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ButtonLayout_obj::ButtonLayout_obj()
{
}

void ButtonLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonLayout);
	HX_MARK_MEMBER_NAME(iconPosition,"iconPosition");
	 ::haxe::ui::layouts::Layout_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ButtonLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(iconPosition,"iconPosition");
	 ::haxe::ui::layouts::Layout_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ButtonLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"iconPosition") ) { return hx::Val( inCallProp == hx::paccAlways ? get_iconPosition() : iconPosition ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextAlignPos") ) { return hx::Val( getTextAlignPos_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_iconPosition") ) { return hx::Val( get_iconPosition_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ButtonLayout_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"iconPosition") ) { iconPosition=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ButtonLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ButtonLayout_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ButtonLayout_obj,iconPosition),HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ButtonLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonLayout_obj_sMemberFields[] = {
	HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76"),
	HX_HCSTRING("get_iconPosition","\xcb","\xd1","\xd7","\x7a"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("getTextAlignPos","\x52","\x5b","\x42","\x21"),
	::String(null()) };

static void ButtonLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ButtonLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ButtonLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ButtonLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class ButtonLayout_obj::__mClass;

void ButtonLayout_obj::__register()
{
	hx::Object *dummy = new ButtonLayout_obj;
	ButtonLayout_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.components.ButtonLayout","\xe2","\xa3","\x79","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ButtonLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ButtonLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ButtonLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ButtonLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
