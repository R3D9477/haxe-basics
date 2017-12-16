// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets__SizerFlag_SizerFlag_Impl_
#define INCLUDED_wx_widgets__SizerFlag_SizerFlag_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ba6509720fa912ce
#define INCLUDED_ba6509720fa912ce
#include "wx/defs.h"
#endif
HX_DECLARE_CLASS3(wx,widgets,_SizerFlag,SizerFlag_Impl_)

namespace wx{
namespace widgets{
namespace _SizerFlag{


class HXCPP_CLASS_ATTRIBUTES SizerFlag_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SizerFlag_Impl__obj OBJ_;
		SizerFlag_Impl__obj();

	public:
		enum { _hx_ClassId = 0x07658fd5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets._SizerFlag.SizerFlag_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets._SizerFlag.SizerFlag_Impl_"); }

		hx::ObjectPtr< SizerFlag_Impl__obj > __new() {
			hx::ObjectPtr< SizerFlag_Impl__obj > __this = new SizerFlag_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< SizerFlag_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			SizerFlag_Impl__obj *__this = (SizerFlag_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SizerFlag_Impl__obj), false, "wx.widgets._SizerFlag.SizerFlag_Impl_"));
			*(void **)__this = SizerFlag_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SizerFlag_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SizerFlag_Impl_","\x1d","\x25","\xf8","\xfd"); }

		static void __boot();
		static int NONE;
		static int fromDirection( cpp::Struct<wxDirection, cpp::EnumHandler> direction);

		static int fromStretch( cpp::Struct<wxStretch, cpp::EnumHandler> stretch);

		static int orFlags(int a,int b);
		static ::Dynamic orFlags_dyn();

		static int orInt(int a,int b);
		static ::Dynamic orInt_dyn();

};

} // end namespace wx
} // end namespace widgets
} // end namespace _SizerFlag

#endif /* INCLUDED_wx_widgets__SizerFlag_SizerFlag_Impl_ */ 
