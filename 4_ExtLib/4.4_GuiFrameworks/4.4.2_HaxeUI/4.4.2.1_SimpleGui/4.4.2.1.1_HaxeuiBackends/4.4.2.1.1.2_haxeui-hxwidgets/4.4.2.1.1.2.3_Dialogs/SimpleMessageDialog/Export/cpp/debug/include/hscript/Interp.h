// GeneratedByHaxe
#ifndef INCLUDED_hscript_Interp
#define INCLUDED_hscript_Interp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hscript,Error)
HX_DECLARE_CLASS1(hscript,Expr)
HX_DECLARE_CLASS1(hscript,Interp)

namespace hscript{


class HXCPP_CLASS_ATTRIBUTES Interp_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Interp_obj OBJ_;
		Interp_obj();

	public:
		enum { _hx_ClassId = 0x005c6827 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hscript.Interp")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hscript.Interp"); }
		static hx::ObjectPtr< Interp_obj > __new();
		static hx::ObjectPtr< Interp_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Interp_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Interp","\xf4","\xed","\x1a","\xd3"); }

		 ::haxe::ds::StringMap variables;
		 ::haxe::ds::StringMap locals;
		 ::haxe::ds::StringMap binops;
		int depth;
		bool inTry;
		::Array< ::Dynamic> declared;
		 ::Dynamic posInfos();
		::Dynamic posInfos_dyn();

		void initOps();
		::Dynamic initOps_dyn();

		 ::Dynamic assign( ::hscript::Expr e1, ::hscript::Expr e2);
		::Dynamic assign_dyn();

		void assignOp(::String op, ::Dynamic fop);
		::Dynamic assignOp_dyn();

		 ::Dynamic evalAssignOp(::String op, ::Dynamic fop, ::hscript::Expr e1, ::hscript::Expr e2);
		::Dynamic evalAssignOp_dyn();

		 ::Dynamic increment( ::hscript::Expr e,bool prefix,int delta);
		::Dynamic increment_dyn();

		 ::Dynamic execute( ::hscript::Expr expr);
		::Dynamic execute_dyn();

		 ::Dynamic exprReturn( ::hscript::Expr e);
		::Dynamic exprReturn_dyn();

		 ::haxe::ds::StringMap duplicate( ::haxe::ds::StringMap h);
		::Dynamic duplicate_dyn();

		void restore(int old);
		::Dynamic restore_dyn();

		 ::hscript::Expr edef( ::hscript::Expr e);
		::Dynamic edef_dyn();

		 ::Dynamic error( ::hscript::Error e);
		::Dynamic error_dyn();

		 ::Dynamic resolve(::String id);
		::Dynamic resolve_dyn();

		 ::Dynamic expr( ::hscript::Expr e);
		::Dynamic expr_dyn();

		void doWhileLoop( ::hscript::Expr econd, ::hscript::Expr e);
		::Dynamic doWhileLoop_dyn();

		void whileLoop( ::hscript::Expr econd, ::hscript::Expr e);
		::Dynamic whileLoop_dyn();

		 ::Dynamic makeIterator( ::Dynamic v);
		::Dynamic makeIterator_dyn();

		void forLoop(::String n, ::hscript::Expr it, ::hscript::Expr e);
		::Dynamic forLoop_dyn();

		bool isMap( ::Dynamic o);
		::Dynamic isMap_dyn();

		 ::Dynamic getMapValue( ::Dynamic map, ::Dynamic key);
		::Dynamic getMapValue_dyn();

		void setMapValue( ::Dynamic map, ::Dynamic key, ::Dynamic value);
		::Dynamic setMapValue_dyn();

		virtual  ::Dynamic get( ::Dynamic o,::String f);
		::Dynamic get_dyn();

		virtual  ::Dynamic set( ::Dynamic o,::String f, ::Dynamic v);
		::Dynamic set_dyn();

		 ::Dynamic fcall( ::Dynamic o,::String f,::cpp::VirtualArray args);
		::Dynamic fcall_dyn();

		 ::Dynamic call( ::Dynamic o, ::Dynamic f,::cpp::VirtualArray args);
		::Dynamic call_dyn();

		virtual  ::Dynamic cnew(::String cl,::cpp::VirtualArray args);
		::Dynamic cnew_dyn();

};

} // end namespace hscript

#endif /* INCLUDED_hscript_Interp */ 
