// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
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
#ifndef INCLUDED_haxe_ui_styles_CssClass
#include <haxe/ui/styles/CssClass.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Engine
#include <haxe/ui/styles/Engine.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Parser
#include <haxe/ui/styles/Parser.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Rule
#include <haxe/ui/styles/Rule.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fd5506951d081e8c_20_new,"haxe.ui.styles.Engine","new",0xb3fbdd4e,"haxe.ui.styles.Engine.new","haxe/ui/styles/Engine.hx",20,0x28b8b461)
HX_LOCAL_STACK_FRAME(_hx_pos_fd5506951d081e8c_23_applyClasses,"haxe.ui.styles.Engine","applyClasses",0x8330802a,"haxe.ui.styles.Engine.applyClasses","haxe/ui/styles/Engine.hx",23,0x28b8b461)
HX_LOCAL_STACK_FRAME(_hx_pos_fd5506951d081e8c_44_sortByPriority,"haxe.ui.styles.Engine","sortByPriority",0x710b672b,"haxe.ui.styles.Engine.sortByPriority","haxe/ui/styles/Engine.hx",44,0x28b8b461)
HX_LOCAL_STACK_FRAME(_hx_pos_fd5506951d081e8c_98_addRules,"haxe.ui.styles.Engine","addRules",0xe74fde68,"haxe.ui.styles.Engine.addRules","haxe/ui/styles/Engine.hx",98,0x28b8b461)
HX_LOCAL_STACK_FRAME(_hx_pos_fd5506951d081e8c_49_ruleMatch,"haxe.ui.styles.Engine","ruleMatch",0x2326a217,"haxe.ui.styles.Engine.ruleMatch","haxe/ui/styles/Engine.hx",49,0x28b8b461)
namespace haxe{
namespace ui{
namespace styles{

void Engine_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fd5506951d081e8c_20_new)
HXDLIN(  20)		this->rules = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic Engine_obj::__CreateEmpty() { return new Engine_obj; }

void *Engine_obj::_hx_vtable = 0;

Dynamic Engine_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Engine_obj > _hx_result = new Engine_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Engine_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x334475be;
}

 ::haxe::ui::styles::Style Engine_obj::applyClasses( ::haxe::ui::core::Component c,hx::Null< bool >  __o_set){
bool set = __o_set.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_fd5506951d081e8c_23_applyClasses)
HXLINE(  24)		 ::haxe::ui::styles::Style s =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX );
HXLINE(  25)		if ((set == true)) {
HXLINE(  26)			c->set_style(s);
            		}
HXLINE(  28)		::Array< ::Dynamic> rules = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  29)		{
HXLINE(  29)			int _g = (int)0;
HXDLIN(  29)			::Array< ::Dynamic> _g1 = this->rules;
HXDLIN(  29)			while((_g < _g1->length)){
HXLINE(  29)				 ::haxe::ui::styles::Rule r = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::Rule >();
HXDLIN(  29)				_g = (_g + (int)1);
HXLINE(  30)				if (!(::haxe::ui::styles::Engine_obj::ruleMatch(r->c,c))) {
HXLINE(  31)					continue;
            				}
HXLINE(  33)				rules->push(r);
            			}
            		}
HXLINE(  35)		rules->sort(this->sortByPriority_dyn());
HXLINE(  36)		{
HXLINE(  36)			int _g2 = (int)0;
HXDLIN(  36)			while((_g2 < rules->length)){
HXLINE(  36)				 ::haxe::ui::styles::Rule r1 = rules->__get(_g2).StaticCast<  ::haxe::ui::styles::Rule >();
HXDLIN(  36)				_g2 = (_g2 + (int)1);
HXLINE(  37)				s->apply(r1->s);
            			}
            		}
HXLINE(  38)		if (hx::IsNotNull( c->customStyle )) {
HXLINE(  39)			s->apply(c->customStyle);
            		}
HXLINE(  41)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,applyClasses,return )

int Engine_obj::sortByPriority( ::haxe::ui::styles::Rule r1, ::haxe::ui::styles::Rule r2){
            	HX_STACKFRAME(&_hx_pos_fd5506951d081e8c_44_sortByPriority)
HXLINE(  45)		int dp = (r1->priority - r2->priority);
HXLINE(  46)		if ((dp == (int)0)) {
HXLINE(  46)			return (r1->id - r2->id);
            		}
            		else {
HXLINE(  46)			return dp;
            		}
HXDLIN(  46)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,sortByPriority,return )

void Engine_obj::addRules(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_fd5506951d081e8c_98_addRules)
HXDLIN(  98)		int _g = (int)0;
HXDLIN(  98)		::Array< ::Dynamic> _g1 =  ::haxe::ui::styles::Parser_obj::__alloc( HX_CTX )->parseRules(text);
HXDLIN(  98)		while((_g < _g1->length)){
HXDLIN(  98)			 ::Dynamic r = _g1->__get(_g);
HXDLIN(  98)			_g = (_g + (int)1);
HXLINE(  99)			 ::haxe::ui::styles::CssClass c = ( ( ::haxe::ui::styles::CssClass)(r->__Field(HX_("c",63,00,00,00),hx::paccDynamic)) );
HXLINE( 100)			int imp;
HXDLIN( 100)			if (( (bool)(r->__Field(HX_("imp",0c,0c,50,00),hx::paccDynamic)) )) {
HXLINE( 100)				imp = (int)1;
            			}
            			else {
HXLINE( 100)				imp = (int)0;
            			}
HXLINE( 101)			int nids = (int)0;
HXDLIN( 101)			int nothers = (int)0;
HXDLIN( 101)			int nnodes = (int)0;
HXLINE( 102)			while(hx::IsNotNull( c )){
HXLINE( 103)				if (hx::IsNotNull( c->id )) {
HXLINE( 103)					nids = (nids + (int)1);
            				}
HXLINE( 104)				if (hx::IsNotNull( c->node )) {
HXLINE( 104)					nnodes = (nnodes + (int)1);
            				}
HXLINE( 105)				if (hx::IsNotNull( c->pseudoClass )) {
HXLINE( 105)					nothers = (nothers + (int)1);
            				}
HXLINE( 106)				if (hx::IsNotNull( c->className )) {
HXLINE( 106)					nothers = (nothers + (int)1);
            				}
HXLINE( 107)				c = c->parent;
            			}
HXLINE( 109)			 ::haxe::ui::styles::Rule rule =  ::haxe::ui::styles::Rule_obj::__alloc( HX_CTX );
HXLINE( 110)			rule->id = this->rules->length;
HXLINE( 111)			rule->c = ( ( ::haxe::ui::styles::CssClass)(r->__Field(HX_("c",63,00,00,00),hx::paccDynamic)) );
HXLINE( 112)			rule->s = ( ( ::haxe::ui::styles::Style)(r->__Field(HX_("s",73,00,00,00),hx::paccDynamic)) );
HXLINE( 113)			rule->priority = ((int)((int)((int)((int)imp << (int)(int)24) | (int)((int)nids << (int)(int)16)) | (int)((int)nothers << (int)(int)8)) | (int)nnodes);
HXLINE( 114)			this->rules->push(rule);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,addRules,(void))

bool Engine_obj::ruleMatch( ::haxe::ui::styles::CssClass c, ::haxe::ui::core::Component d){
            	HX_STACKFRAME(&_hx_pos_fd5506951d081e8c_49_ruleMatch)
HXLINE(  50)		if (hx::IsNotNull( c->pseudoClass )) {
HXLINE(  51)			::String pc = (HX_(":",3a,00,00,00) + c->pseudoClass);
HXLINE(  52)			bool found = false;
HXLINE(  53)			{
HXLINE(  53)				int _g = (int)0;
HXDLIN(  53)				::Array< ::String > _g1 = d->classes;
HXDLIN(  53)				while((_g < _g1->length)){
HXLINE(  53)					::String cc = _g1->__get(_g);
HXDLIN(  53)					_g = (_g + (int)1);
HXLINE(  54)					if ((cc == pc)) {
HXLINE(  55)						found = true;
HXLINE(  56)						goto _hx_goto_8;
            					}
            				}
            				_hx_goto_8:;
            			}
HXLINE(  58)			if (!(found)) {
HXLINE(  59)				return false;
            			}
            		}
HXLINE(  61)		if (hx::IsNotNull( c->className )) {
HXLINE(  62)			if (hx::IsNull( d->classes )) {
HXLINE(  63)				return false;
            			}
HXLINE(  64)			bool found1 = false;
HXLINE(  65)			{
HXLINE(  65)				int _g2 = (int)0;
HXDLIN(  65)				::Array< ::String > _g11 = d->classes;
HXDLIN(  65)				while((_g2 < _g11->length)){
HXLINE(  65)					::String cc1 = _g11->__get(_g2);
HXDLIN(  65)					_g2 = (_g2 + (int)1);
HXLINE(  66)					if ((cc1 == c->className)) {
HXLINE(  67)						found1 = true;
HXLINE(  68)						goto _hx_goto_9;
            					}
            				}
            				_hx_goto_9:;
            			}
HXLINE(  70)			if (!(found1)) {
HXLINE(  71)				return false;
            			}
            		}
HXLINE(  74)		if (hx::IsNotNull( c->node )) {
HXLINE(  75)			::String className = ( (::String)(::Type_obj::getClassName(::Type_obj::getClass(d)).split(HX_(".",2e,00,00,00))->pop()) );
HXLINE(  76)			::String _hx_tmp = c->node.toLowerCase();
HXDLIN(  76)			if ((_hx_tmp != className.toLowerCase())) {
HXLINE(  77)				return false;
            			}
            		}
HXLINE(  81)		bool _hx_tmp1;
HXDLIN(  81)		if (hx::IsNotNull( c->id )) {
HXLINE(  81)			::String c1 = c->id;
HXDLIN(  81)			_hx_tmp1 = (c1 != d->get_id());
            		}
            		else {
HXLINE(  81)			_hx_tmp1 = false;
            		}
HXDLIN(  81)		if (_hx_tmp1) {
HXLINE(  82)			return false;
            		}
HXLINE(  83)		if (hx::IsNotNull( c->parent )) {
HXLINE(  84)			 ::haxe::ui::core::Component p = d->parentComponent;
HXLINE(  85)			while(hx::IsNotNull( p )){
HXLINE(  86)				if (::haxe::ui::styles::Engine_obj::ruleMatch(c->parent,p)) {
HXLINE(  87)					goto _hx_goto_10;
            				}
HXLINE(  88)				p = p->parentComponent;
            			}
            			_hx_goto_10:;
HXLINE(  90)			if (hx::IsNull( p )) {
HXLINE(  91)				return false;
            			}
            		}
HXLINE(  94)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,ruleMatch,return )


hx::ObjectPtr< Engine_obj > Engine_obj::__new() {
	hx::ObjectPtr< Engine_obj > __this = new Engine_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Engine_obj > Engine_obj::__alloc(hx::Ctx *_hx_ctx) {
	Engine_obj *__this = (Engine_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Engine_obj), true, "haxe.ui.styles.Engine"));
	*(void **)__this = Engine_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Engine_obj::Engine_obj()
{
}

void Engine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Engine);
	HX_MARK_MEMBER_NAME(rules,"rules");
	HX_MARK_END_CLASS();
}

void Engine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rules,"rules");
}

hx::Val Engine_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rules") ) { return hx::Val( rules ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addRules") ) { return hx::Val( addRules_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"applyClasses") ) { return hx::Val( applyClasses_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sortByPriority") ) { return hx::Val( sortByPriority_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Engine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"ruleMatch") ) { outValue = ruleMatch_dyn(); return true; }
	}
	return false;
}

hx::Val Engine_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rules") ) { rules=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Engine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("rules","\xf7","\x63","\x56","\xf1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Engine_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Engine_obj,rules),HX_HCSTRING("rules","\xf7","\x63","\x56","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Engine_obj_sStaticStorageInfo = 0;
#endif

static ::String Engine_obj_sMemberFields[] = {
	HX_HCSTRING("rules","\xf7","\x63","\x56","\xf1"),
	HX_HCSTRING("applyClasses","\xd8","\x9a","\xfe","\xa8"),
	HX_HCSTRING("sortByPriority","\x59","\x09","\x98","\x3a"),
	HX_HCSTRING("addRules","\x16","\x8a","\xb3","\x6a"),
	::String(null()) };

static void Engine_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Engine_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
};

#endif

hx::Class Engine_obj::__mClass;

static ::String Engine_obj_sStaticFields[] = {
	HX_HCSTRING("ruleMatch","\xa9","\x2e","\xf9","\x96"),
	::String(null())
};

void Engine_obj::__register()
{
	hx::Object *dummy = new Engine_obj;
	Engine_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.styles.Engine","\x5c","\xde","\x1b","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Engine_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Engine_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Engine_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Engine_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Engine_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Engine_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Engine_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Engine_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
