// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_scripting_ConditionEvaluator
#define INCLUDED_haxe_ui_scripting_ConditionEvaluator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,scripting,ConditionEvaluator)
HX_DECLARE_CLASS1(hscript,Interp)
HX_DECLARE_CLASS1(hscript,Parser)

namespace haxe{
namespace ui{
namespace scripting{


class HXCPP_CLASS_ATTRIBUTES ConditionEvaluator_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ConditionEvaluator_obj OBJ_;
		ConditionEvaluator_obj();

	public:
		enum { _hx_ClassId = 0x21c15c45 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.scripting.ConditionEvaluator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.scripting.ConditionEvaluator"); }
		static hx::ObjectPtr< ConditionEvaluator_obj > __new();
		static hx::ObjectPtr< ConditionEvaluator_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConditionEvaluator_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ConditionEvaluator","\xb4","\x85","\xf6","\x13"); }

		static  ::hscript::Parser _parser;
		static  ::hscript::Interp _interp;
		bool evaluate(::String condition);
		::Dynamic evaluate_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace scripting

#endif /* INCLUDED_haxe_ui_scripting_ConditionEvaluator */ 
