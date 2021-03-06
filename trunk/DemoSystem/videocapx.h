#if !defined(AFX_VIDEOCAPX_H__8EF89C51_8CB5_4FF7_8AFC_E7576F89961A__INCLUDED_)
#define AFX_VIDEOCAPX_H__8EF89C51_8CB5_4FF7_8AFC_E7576F89961A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CVideoCapX wrapper class

class CVideoCapX : public CWnd
{
protected:
	DECLARE_DYNCREATE(CVideoCapX)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x912fb007, 0xdd9a, 0x11d3, { 0xbd, 0x8d, 0xda, 0xaf, 0xcb, 0x8d, 0x93, 0x78 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:
	CString GetCapFilename();
	void SetCapFilename(LPCTSTR);
	BOOL GetCaptureAudio();
	void SetCaptureAudio(BOOL);
	BOOL GetCapTimeLimitEnabled();
	void SetCapTimeLimitEnabled(BOOL);
	long GetCapTimeLimit();
	void SetCapTimeLimit(long);
	BOOL GetConnected();
	void SetConnected(BOOL);
	BOOL GetPreview();
	void SetPreview(BOOL);
	double GetCaptureRate();
	void SetCaptureRate(double);
	BOOL GetPreviewScale();
	void SetPreviewScale(BOOL);
	long GetVideoDeviceIndex();
	void SetVideoDeviceIndex(long);
	long GetAudioDeviceIndex();
	void SetAudioDeviceIndex(long);
	BOOL GetIsCapturing();
	void SetIsCapturing(BOOL);
	long GetVideoCodecQuality();
	void SetVideoCodecQuality(long);
	BOOL GetServerMode();
	void SetServerMode(BOOL);
	long GetServerPort();
	void SetServerPort(long);
	CString GetServerPassword();
	void SetServerPassword(LPCTSTR);
	long GetVideoCodecIndex();
	void SetVideoCodecIndex(long);
	long GetAudioCodecIndex();
	void SetAudioCodecIndex(long);
	long GetDebugMode();
	void SetDebugMode(long);
	BOOL GetFTPPassiveMode();
	void SetFTPPassiveMode(BOOL);
	long GetVideoInputIndex();
	void SetVideoInputIndex(long);
	long GetMousePointer();
	void SetMousePointer(long);
	OLE_HANDLE GetHWnd();
	void SetHWnd(OLE_HANDLE);
	long GetMasterStream();
	void SetMasterStream(long);
	long GetVideoWidth();
	void SetVideoWidth(long);
	long GetVideoHeight();
	void SetVideoHeight(long);
	BOOL GetOverlay();
	void SetOverlay(BOOL);
	BOOL GetHasOverlay();
	void SetHasOverlay(BOOL);
	long GetVideoFlip();
	void SetVideoFlip(long);
	long GetAudioInputIndex();
	void SetAudioInputIndex(long);
	BOOL GetPreviewFullScreen();
	void SetPreviewFullScreen(BOOL);
	long GetProfileIndex();
	void SetProfileIndex(long);
	long GetServerQuality();
	void SetServerQuality(long);
	CString GetProfileData();
	void SetProfileData(LPCTSTR);
	BOOL GetPreviewAudio();
	void SetPreviewAudio(BOOL);
	long GetWMTVersion();
	void SetWMTVersion(long);
	long GetDeviceType();
	void SetDeviceType(long);
	LPUNKNOWN GetUserFilterIUnknown();
	void SetUserFilterIUnknown(LPUNKNOWN);
	long GetUseVideoFilter();
	void SetUseVideoFilter(long);
	CString GetUserFilterCLSID();
	void SetUserFilterCLSID(LPCTSTR);
	BOOL GetUseDeinterlace();
	void SetUseDeinterlace(BOOL);
	long GetColorFormat();
	void SetColorFormat(long);
	BOOL GetSyncUsingStreamOffset();
	void SetSyncUsingStreamOffset(BOOL);
	BOOL GetHalfSizedVideo();
	void SetHalfSizedVideo(BOOL);
	CString GetVersion();
	void SetVersion(LPCTSTR);
	BOOL GetUseVMR9();
	void SetUseVMR9(BOOL);
	long GetOverscan();
	void SetOverscan(long);
	CString GetWMAttributes();
	void SetWMAttributes(LPCTSTR);
	LPDISPATCH GetMouseIcon();
	void SetMouseIcon(LPDISPATCH);
	CString GetLocalAddress();
	void SetLocalAddress(LPCTSTR);
	BOOL GetEnableNewFrameEvent();
	void SetEnableNewFrameEvent(BOOL);
	CString GetVideoSourceURL();
	void SetVideoSourceURL(LPCTSTR);
	BOOL GetUseOverlay();
	void SetUseOverlay(BOOL);
	CString GetUserFilter2CLSID();
	void SetUserFilter2CLSID(LPCTSTR);
	CString GetUserFilter3CLSID();
	void SetUserFilter3CLSID(LPCTSTR);

// Operations
public:
	BOOL CopyFrame();
	BOOL SaveFrame(LPCTSTR filename);
	BOOL StartCapture();
	BOOL StopCapture();
	BOOL SetVideoFormat(long width, long height);
	long GetCapStatus(long* ImageWidth, long* ImageHeight, long* CurrentVideoFrame, long* CurrentVideoFramesDropped, long* CurrentTimeElapsedMS, long* fCapturingNow);
	LPDISPATCH GrabFrame();
	BOOL SaveFrameJPG(LPCTSTR filename, long quality);
	BOOL UploadFrame(LPCTSTR server, LPCTSTR username, LPCTSTR password, LPCTSTR path, LPCTSTR filename, long port, long quality);
	BOOL GetAudioFormat(long* FmtTag, long* nChannels, long* nSamplesPerSec, long* nAvgBytesPerSec, long* nBlockAlign, long* wBitsPerSample);
	BOOL SetAudioFormat(long FmtTag, long nChannels, long nSamplesPerSec, long nAvgBytesPerSec, long nBlockAlign, long nBitsPerSample);
	long DetectMotion();
	CString GetVideoDeviceName(long Index);
	CString GetAudioDeviceName(long Index);
	long AllocCapFile(long FileSizeMb);
	long CopyCaptureFile(LPCTSTR New);
	long Recompress(LPCTSTR SrcFile, LPCTSTR DestFile);
	VARIANT GetRGB();
	long SetTextOverlay(long Index, LPCTSTR Caption, long X, long Y, LPCTSTR FontName, long FontSize, long FColor, long BColor);
	LPDISPATCH Acquire();
	long SelectSource();
	long SetCrop(long X, long Y, long W, long H);
	long GetVideoFormat(long* width, long* height);
	long SavePictureJPG(LPDISPATCH Picture, LPCTSTR filename, long quality);
	LPDISPATCH ReceiveFrame(LPCTSTR ServerName);
	long ShowVideoSourceDlg();
	long ShowVideoFormatDlg();
	long ShowVideoCodecDlg();
	long ShowAudioCodecDlg();
	long ShowAudioSourceDlg();
	long ShowAudioFormatDlg();
	long PlayerOpen(LPCTSTR filename);
	long PlayerClose();
	long PlayerStart();
	long PlayerStop();
	long PlayerGetVideoSize(long* width, long* height);
	long PlayerSetMute(long Mute);
	long PlayerGetPos();
	long PlayerSetPos(double PosMS);
	long PlayerSetFullScreen(long Full);
	long PlayerGetLenMS();
	long GetFrameAsHBITMAP();
	long PlayerSetSize(long width, long height);
	long GetVideoProcAmp(long ValueIndex, long* Value);
	long SetVideoProcAmp(long ValueIndex, long Value);
	long GetVideoProcAmpValueRange(long ValueIndex, long* Min, long* Max, long* SteppingDelta, long* Default);
	long SetMotionMask(long Index, long Left, long Top, long width, long height);
	CString GetVideoInputName(long Index);
	long GetVideoInputCount();
	long PauseCapture();
	long ResumeCapture();
	long PlayerStepOneFrame();
	double PlayerGetFrameCount();
	double PlayerSetFrame(double nFrame);
	double PlayerGetFrame();
	long VCRSetMode(long Mode);
	long SetTunerChannel(long nChannel);
	VARIANT GetVideoCaps();
	long SetTVFormat(long NewFormat);
	long SingleFrameOpen(long fps);
	long SingleFrameClose();
	long SingleFrameAdd();
	long SetAudioDelay(long DelayMS);
	long CompareImages(LPDISPATCH Picture1, LPDISPATCH Picture2, long Sensitivity);
	long SetBitmapOverlay(long BitmapHandle, long X, long Y, long TransColor);
	long CameraControlGet(long Prop);
	long CameraControlSet(long Prop, long Val);
	CString GetVideoCodecName(long nIndex);
	long GetTimecode();
	long SetTunerInputType(long InputType);
	CString GetAudioCodecName(long Index);
	long StartCapture2();
	long GetAudioInputCount();
	CString GetAudioInputName(long Index);
	long GetVideoDeviceCount();
	long GetVideoCodecCount();
	long GetAudioCodecCount();
	long GetAudioDeviceCount();
	long StopBroadcast();
	long StartBroadcast(long port, long MaxConnections);
	long GetProfileCount();
	CString GetProfileName(long ProfileIndex);
	CString GetProfileDesc(long ProfileIndex);
	long SetTunerCountryCode(long Code);
	long ShowTunerDlg();
	double GetActualFrameRate();
	long SetAudioInputLevel(long Level);
	long GetTunerSignal();
	long SetAudioVolume(long Volume);
	long SetMasterAudioVolume(long LineID, long Volume);
	DATE GetDateCode();
	CString GetFilterSettings(long FilterID);
	long SetFilterSettings(long Filter, LPCTSTR Data);
	double GetCapFileSize();
	double PlayerSetRate(double NewRate);
	long ShowVideoCrossbarDlg();
	long ShowUserFilterDlg(long FilterIndex);
	long PlayerStepFrames(long nFrames);
	long GetAudioLevel();
	long SetVideoFormatEx(long CapabilityIndex);
	BOOL SetHighPriority(BOOL High);
	long LoadProfileFromURL(LPCTSTR URL);
	long HTTPUpload(LPCTSTR WebServer, LPCTSTR WebPage, LPCTSTR Fields, LPCTSTR Files);
	LPUNKNOWN GetVMR9IUnknown();
	long ReceiveAudio(LPCTSTR ServerAddress, BOOL Play, long* nChannels, long* nSamplesPerSecond, long* nBytesPerSample, VARIANT* PCMData);
	long CameraControlGetRange(long Prop, long* MinVal, long* MaxVal, long* SteppingDelta, long* DefaultValue, long* CapsFlags);
	CString GetVideoDeviceDesc(long Index);
	long DisplayRemote(LPCTSTR RemoteAddress, BOOL Audio);
	long ExportToDV(LPCTSTR filename);
	long PlayerOpenDVD(LPCTSTR path);
	long SingleFrameAddPicture(long BitmapHandle);
	long SetFadeLevel(long NewLevel);
	BOOL EnableExternalTrigger(BOOL bEnable);
	long RecompressEx(LPCTSTR SrcFile1, LPCTSTR SrcFile2, LPCTSTR DestFile, double TimeStart, double TimeEnd);
	long AutoTune(long nChannel);
	long StoreAutoTune();
	CString GetVideoCaps2();
	long StartBroadcastPush(LPCTSTR URL, LPCTSTR User, LPCTSTR password);
	long PlayerOpenBroadcast(LPCTSTR filename, long port, long MaxConnections);
	long ShowVideoDisplayDlg();
	long GetAudioLevel2(long* Left, long* Right);
	long SendScriptCommand(LPCTSTR Type, LPCTSTR Data);
	BOOL UploadFile(LPCTSTR server, LPCTSTR username, LPCTSTR password, LPCTSTR path, LPCTSTR server_filename, LPCTSTR local_filepath, long port);
	long SetZoom(long Left, long Top, long width, long height);
	long SetChromaKey(LPCTSTR BackImage, long MinTransparentColor, long MaxTransparentColor);
	void AboutBox();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIDEOCAPX_H__8EF89C51_8CB5_4FF7_8AFC_E7576F89961A__INCLUDED_)
