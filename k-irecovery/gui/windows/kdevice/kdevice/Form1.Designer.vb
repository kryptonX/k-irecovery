<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Form1))
        Me.idBtn = New System.Windows.Forms.Button()
        Me.pathBtn = New System.Windows.Forms.Button()
        Me.Running1 = New kdevice.running()
        Me.SuspendLayout()
        '
        'idBtn
        '
        Me.idBtn.FlatStyle = System.Windows.Forms.FlatStyle.System
        Me.idBtn.Font = New System.Drawing.Font("Times New Roman", 10.2!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.idBtn.Location = New System.Drawing.Point(85, 42)
        Me.idBtn.Name = "idBtn"
        Me.idBtn.Size = New System.Drawing.Size(373, 57)
        Me.idBtn.TabIndex = 1
        Me.idBtn.Text = "Grab Device ID"
        Me.idBtn.UseVisualStyleBackColor = True
        '
        'pathBtn
        '
        Me.pathBtn.Enabled = False
        Me.pathBtn.FlatStyle = System.Windows.Forms.FlatStyle.System
        Me.pathBtn.Font = New System.Drawing.Font("Times New Roman", 10.2!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.pathBtn.Location = New System.Drawing.Point(85, 135)
        Me.pathBtn.Name = "pathBtn"
        Me.pathBtn.Size = New System.Drawing.Size(373, 57)
        Me.pathBtn.TabIndex = 2
        Me.pathBtn.Text = "Grab Path"
        Me.pathBtn.UseVisualStyleBackColor = True
        '
        'Running1
        '
        Me.Running1.BackColor = System.Drawing.SystemColors.ControlDark
        Me.Running1.Enabled = False
        Me.Running1.Location = New System.Drawing.Point(0, 6)
        Me.Running1.Name = "Running1"
        Me.Running1.Size = New System.Drawing.Size(545, 226)
        Me.Running1.TabIndex = 3
        Me.Running1.Visible = False
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(8.0!, 16.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.SystemColors.ControlDark
        Me.ClientSize = New System.Drawing.Size(557, 236)
        Me.Controls.Add(Me.Running1)
        Me.Controls.Add(Me.pathBtn)
        Me.Controls.Add(Me.idBtn)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle
        Me.Icon = CType(resources.GetObject("$this.Icon"), System.Drawing.Icon)
        Me.MaximizeBox = False
        Me.Name = "Form1"
        Me.Text = "kDevice -- KryptonX"
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents idBtn As System.Windows.Forms.Button
    Friend WithEvents pathBtn As System.Windows.Forms.Button
    Friend WithEvents Running1 As kdevice.running

End Class
