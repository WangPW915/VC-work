
// 3_24Text2View.h : CMy3_24Text2View 类的接口
//

#pragma once


class CMy3_24Text2View : public CView
{
protected: // 仅从序列化创建
	CMy3_24Text2View();
	DECLARE_DYNCREATE(CMy3_24Text2View)

// 特性
public:
	CMy3_24Text2Doc* GetDocument()

	const; CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;


// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMy3_24Text2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 3_24Text2View.cpp 中的调试版本
inline CMy3_24Text2Doc* CMy3_24Text2View::GetDocument() const
   { return reinterpret_cast<CMy3_24Text2Doc*>(m_pDocument); }
#endif

