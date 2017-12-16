// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_scripting_ScriptInterp
#define INCLUDED_haxe_ui_scripting_ScriptInterp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,scripting,ScriptInterp)
HX_DECLARE_CLASS1(hscript,Interp)

namespace haxe{
namespace ui{
namespace scripting{


class HXCPP_CLASS_ATTRIBUTES ScriptInterp_obj : public  ::hscript::Interp_obj
{
	public:
		typedef  ::hscript::Interp_obj super;
		typedef ScriptInterp_obj OBJ_;
		ScriptInterp_obj();

	public:
		enum { _hx_ClassId = 0x7bc9f0dc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.scripting.ScriptInterp")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.scripting.ScriptInterp"); }
		static hx::ObjectPtr< ScriptInterp_obj > __new();
		static hx::ObjectPtr< ScriptInterp_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScriptInterp_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ScriptInterp","\x5f","\x22","\x28","\xfe"); }

		static  ::haxe::ds::StringMap _classAliases;
		static  ::haxe::ds::StringMap _staticClasses;
		static void addClassAlias(::String alias,::String classPath);
		static ::Dynamic addClassAlias_dyn();

		static void addStaticClass(::String alias, ::Dynamic c);
		static ::Dynamic addStaticClass_dyn();

		bool isVar(::String varName);
		::Dynamic isVar_dyn();

		 ::Dynamic cnew(::String cl,::cpp::VirtualArray args);

		 ::Dynamic get( ::Dynamic o,::String f);

		 ::Dynamic parseResult( ::Dynamic v);
		::Dynamic parseResult_dyn();

		 ::Dynamic set( ::Dynamic o,::String f, ::Dynamic v);

};

} // end namespace haxe
} // end namespace ui
} // end namespace scripting

#endif /* INCLUDED_haxe_ui_scripting_ScriptInterp */ 
