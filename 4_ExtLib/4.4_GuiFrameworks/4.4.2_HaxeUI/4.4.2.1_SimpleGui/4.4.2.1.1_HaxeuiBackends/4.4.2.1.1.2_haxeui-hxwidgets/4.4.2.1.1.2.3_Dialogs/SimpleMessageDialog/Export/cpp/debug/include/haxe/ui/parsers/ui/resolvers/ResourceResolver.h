// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_ui_resolvers_ResourceResolver
#define INCLUDED_haxe_ui_parsers_ui_resolvers_ResourceResolver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(haxe,ui,parsers,ui,resolvers,ResourceResolver)

namespace haxe{
namespace ui{
namespace parsers{
namespace ui{
namespace resolvers{


class HXCPP_CLASS_ATTRIBUTES ResourceResolver_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ResourceResolver_obj OBJ_;
		ResourceResolver_obj();

	public:
		enum { _hx_ClassId = 0x602d5b7b };

		void __construct( ::haxe::ds::StringMap params);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.ui.resolvers.ResourceResolver")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.ui.resolvers.ResourceResolver"); }
		static hx::ObjectPtr< ResourceResolver_obj > __new( ::haxe::ds::StringMap params);
		static hx::ObjectPtr< ResourceResolver_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::ds::StringMap params);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ResourceResolver_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ResourceResolver","\x14","\xef","\xfb","\x32"); }

		 ::haxe::ds::StringMap _params;
		virtual ::String getResourceData(::String r);
		::Dynamic getResourceData_dyn();

		::String extension(::String path);
		::Dynamic extension_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui
} // end namespace resolvers

#endif /* INCLUDED_haxe_ui_parsers_ui_resolvers_ResourceResolver */ 
