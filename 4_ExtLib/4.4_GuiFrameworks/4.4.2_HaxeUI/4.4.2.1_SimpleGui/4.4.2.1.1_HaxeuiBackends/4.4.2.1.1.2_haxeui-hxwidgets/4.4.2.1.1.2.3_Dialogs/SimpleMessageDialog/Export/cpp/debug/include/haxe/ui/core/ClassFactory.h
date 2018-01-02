// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_ClassFactory
#define INCLUDED_haxe_ui_core_ClassFactory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,core,ClassFactory)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ClassFactory_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ClassFactory_obj OBJ_;
		ClassFactory_obj();

	public:
		enum { _hx_ClassId = 0x2b5468b3 };

		void __construct(hx::Class generator, ::haxe::ds::StringMap properties);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.ClassFactory")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.ClassFactory"); }
		static hx::ObjectPtr< ClassFactory_obj > __new(hx::Class generator, ::haxe::ds::StringMap properties);
		static hx::ObjectPtr< ClassFactory_obj > __alloc(hx::Ctx *_hx_ctx,hx::Class generator, ::haxe::ds::StringMap properties);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ClassFactory_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ClassFactory","\x92","\x0f","\x6b","\x58"); }

		hx::Class generator;
		 ::haxe::ds::StringMap properties;
		 ::Dynamic newInstance();
		::Dynamic newInstance_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_ClassFactory */ 
