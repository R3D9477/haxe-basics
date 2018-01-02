// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_util_Properties
#define INCLUDED_haxe_ui_util_Properties

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,util,Properties)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES Properties_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Properties_obj OBJ_;
		Properties_obj();

	public:
		enum { _hx_ClassId = 0x52ffc74f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.util.Properties")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.util.Properties"); }
		static hx::ObjectPtr< Properties_obj > __new();
		static hx::ObjectPtr< Properties_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Properties_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Properties","\x13","\x00","\xc0","\x57"); }

		 ::haxe::ds::StringMap _props;
		void fromFile(::String filePath);
		::Dynamic fromFile_dyn();

		::String getProp(::String name,::String defaultValue);
		::Dynamic getProp_dyn();

		int getPropInt(::String name,hx::Null< int >  defaultValue);
		::Dynamic getPropInt_dyn();

		bool getPropBool(::String name,hx::Null< bool >  defaultValue);
		::Dynamic getPropBool_dyn();

		int getPropCol(::String name,hx::Null< int >  defaultValue);
		::Dynamic getPropCol_dyn();

		void setProp(::String name,::String value);
		::Dynamic setProp_dyn();

		 ::Dynamic names();
		::Dynamic names_dyn();

		void addAll( ::haxe::ui::util::Properties p);
		::Dynamic addAll_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_Properties */ 
